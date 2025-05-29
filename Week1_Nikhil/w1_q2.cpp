#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    int max_len=1;
    int len=1;

    for(int i=1;i<int(s.size());i++) {
        if (s[i] == s[i-1]) {len++;}
        else {
            max_len = max(max_len,len);
            len=1;
    }
}
max_len = max(max_len,len);
cout << max_len <<endl;

}
