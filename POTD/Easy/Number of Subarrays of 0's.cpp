// 17 March 2023

#include <bits/stdc++.h>
using namespace std;

long long int no_of_subarrays(int n, vector<int> &arr) {
    // Write your code here.
    long long int ans = 0, c = 0;
    for(int x : arr) {
        if(x) {
            ans += c*(c+1)/2;
            c = 0;
        }
        else
            c++;
    }
    ans += c*(c+1)/2;
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        cout << no_of_subarrays(n, arr) << endl;
    }
    return 0;
}