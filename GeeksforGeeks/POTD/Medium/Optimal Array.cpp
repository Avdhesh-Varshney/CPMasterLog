// 28 February 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> optimalArray(int n,vector<int> &a){
        // Code here
        vector<int> ans(n, 0);
        for(int i = 1; i < n; i++) {
            int temp = abs(a[i] - a[i/2]);
            ans[i] = ans[i-1] + temp;
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
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        vector<int> ans = obj.optimalArray(n, a);
        for(auto ele: ans)
            cout << ele << " ";
        cout << endl;
    }
}