// 12 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        // Code here
        sort(arr.begin(), arr.begin()+n/2);
        int ans = 0;
        for(int i = n/2; i < n; i++)
            ans += arr.begin() + n/2 - lower_bound(arr.begin(), arr.begin()+n/2, 5*arr[i]);
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
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.dominantPairs(n, arr) << endl;
    }
    return 0;
}