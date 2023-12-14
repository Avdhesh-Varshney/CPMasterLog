// 31 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++) m[arr[i]]++;
        int small = INT_MAX, ans = 0;
        for(auto &it : m)
            if(it.second < small) small = it.second;
        for(auto &it : m)
            if(it.second == small && it.first > ans) ans = it.first;
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        cout << ob.LargButMinFreq(arr, n) << endl;
    }
    return 0;
}