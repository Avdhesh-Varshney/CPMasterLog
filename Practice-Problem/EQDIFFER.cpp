// Equal Difference
// Problem Code - EQDIFFER

// https://www.codechef.com/problems/EQDIFFER

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long int> nums(n);
        for(int i = 0; i < n; i++)
            cin >> nums[i];
        unordered_map<long long int, int> m;
        int count = 1;
        for(long long int temp : nums) {
            m[temp]++;
            count = max(count,m[temp]);
        }
        if(n == 1 || n == 2)
            cout << 0 << endl;
        else if(count == 1)
            cout << n-2 << endl;
        else
            cout << n-count << endl;
    }
    return 0;
}