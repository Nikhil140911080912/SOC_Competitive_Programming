#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << n <<" ";
    while (true) {
        int k;
        if (n%2==0) k=n/2;
        else if (n%2!=0) k =3*n+1;
        cout << k <<" ";
        if (k == 1) break;
        n=k;
}
}