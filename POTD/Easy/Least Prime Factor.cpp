// 07 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int> ans;
        ans.emplace_back(0);
        for(int i = 1; i <= n; i++) {
            if(i == 1 || i == 2 || i == 3) ans.emplace_back(i);
            else {
                int j = 0;
                for(j = 2; j < i; j++) {
                    if(i%j == 0) {
                        ans.emplace_back(j);
                        break;
                    }
                }
                if(j == i) ans.push_back(i);
            }
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
        Solution ob;
        vector<int> ans = ob.leastPrimeFactor(n);
        for(auto &i : ans) cout << i << " ";
        cout << endl;
    }
    return 0;
}