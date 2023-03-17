// 12 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {
        //code here
        int a = 0, b = 0;
        for(int i = 0; i < mat.size(); i++) {
            int cnt = 0;
            for(int j = 0; j < mat[0].size(); j++) {
                if(mat[i][j] == 1)
                    cnt++;
            }
            if(b < cnt) {
                b = cnt;
                a = i;
            }
            if(b == mat[0].size())
                break;
        }
        return {a, b};
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<vector<int>> arr(n, vector<int>(n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}