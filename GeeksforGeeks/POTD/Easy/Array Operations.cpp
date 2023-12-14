// 12 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int arrayOperations(int n, vector<int> &arr) {
        // code here
        int ans = 0, cnt = 0, f = 0;
        for(auto &i : arr) {
            if(i > 0) cnt++;
            if(i == 0) {
                f = 1;
                if(cnt > 0) ans++;
                cnt = 0;
            }
        }
        if(cnt > 0) ans++;
        if(!f) return -1;
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
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        cout << res << endl;
    }
    return 0;
}