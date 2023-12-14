// 25 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<string> ans;
    string s;
    int target;
    void gen_exp(int ind, long prev, long val, string ex) {
        if(ind == s.size()) {
            if(val == target) ans.emplace_back(ex);
            return;
        }
        int n = s.size(), curr = 0;
        string ns = "";
        for(int i = ind; i < n; i++){
            if(i > ind and s[ind] == '0') return;
            ns += s[i];
            curr = curr*10 + s[i] - '0';
            if(ind == 0) {
                gen_exp(i+1, curr, curr, ex+ns);
                continue;
            }
            gen_exp(i+1, curr, val+curr, ex + "+" + ns);
            gen_exp(i+1, -curr, val-curr, ex + "-" + ns);
            gen_exp(i+1, prev*curr, val-prev+prev*curr, ex + "*" + ns);
        }
    }
    vector<string> addOperators(string S, int target) {
        // code here
        this->target = target;
        this->s = S;
        gen_exp(0, 0, 0, "");
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int target;
        string S;
        cin >> S >> target;

        Solution obj;
        vector<string> ans = obj.addOperators(S, target);
        sort(ans.begin(), ans.end());
        for(auto &s : ans) cout << s << " ";
        cout << endl;
    }
    return 0;
}