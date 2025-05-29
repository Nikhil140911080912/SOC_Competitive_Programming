#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> nums(n-1);
    // Take the input for vector
    for(int i=0;i<n-1;i++){
        cin >> nums[i];
    }
    // Sort it in ascending order
    sort(nums.begin(),nums.end());
    
    // Check each index with count starting from 1
    for(int k=1;k<=n;k++) {
        if(nums[k-1]!=k) {
            cout << k;
        return 0;
    }
}
     cout << n;   // If all elements from 1 to n-1 are present then, print n.


    }