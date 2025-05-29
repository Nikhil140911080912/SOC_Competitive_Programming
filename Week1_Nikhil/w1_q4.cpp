#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int digit_diff(int num) {
    int min_d = 9, max_d = 0;
    while (num > 0) {
        int d = num % 10;
        min_d = min(min_d, d);
        max_d = max(max_d, d);
        num /= 10;
    }
    return max_d - min_d;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int l, r;
        cin >> l >> r;
        
        int best_num = l;
        int max_diff = digit_diff(l);
        
        // Try a few numbers from l to min(r, l + 100)
        for (int i = l + 1; i <= r && i <= l + 100; ++i) {
            int diff = digit_diff(i);
            if (diff > max_diff) {
                max_diff = diff;
                best_num = i;
            }
            if (max_diff == 9) break; // early exit
        }
        
        cout << best_num << endl;
    }
    
    return 0;
}
