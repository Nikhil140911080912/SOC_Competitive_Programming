#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n[t], k[t];
    for (int i=0;i<t;i++) {
        cin >> n[i] >> k[i];
    }
    for (int i=0;i<t;i++) {
        int c = n[i] % k[i];
        if (c %2 == 0){
            cout << "YES" << endl;}
            else cout << "NO" << endl;
        }
    }