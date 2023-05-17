// 22 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
        vector<int> brr(arr);
        sort(brr.begin(), brr.end());
        vector<long long> pref(n, 0);
        for(int i = 0; i < n; i++) {
            pref[i] += brr[i];
            if(i-1 >= 0) pref[i] += pref[i-1];
        }
        vector<long long> ans(n, 0);
        for(int i = 0; i < n; i++) {
           int ind = lower_bound(brr.begin(), brr.end(), arr[i]) - brr.begin();
           if(ind-1 >= 0) ans[i] = pref[ind-1];
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        Solution ob;
        vector<long long> ans = ob.smallerSum(n, arr);
        for(int i = 0; i < n; i++) {
            if(i != n-1) cout << ans[i] << " ";
            else cout << ans[i] << endl;
        }
    }
    return 0;
}