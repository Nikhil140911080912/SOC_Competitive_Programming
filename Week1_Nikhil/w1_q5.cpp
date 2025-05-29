#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    long long n;
    cin >> n;
    cout << n << " ";
    if (n==1) cout << endl;
    else
    while (true) {
        long k;
        if (k == 1) break;
        if (n%2==0) k=n/2;
        else if (n%2!=0) k =3*n+1;
        cout << k <<" ";
        n=k;
}
}