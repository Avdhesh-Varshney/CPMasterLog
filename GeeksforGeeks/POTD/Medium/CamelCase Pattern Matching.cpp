// 29 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool isUpperCase(char c) {
        return c >= 'A' && c <= 'Z';
    }
    bool isMatch(string base, string tmp) {
        int n = base.size(), m = tmp.size(), i = 0;
        if(n > m) return false;
        while(i < n) {
            if(base[i] != tmp[i]) return false;
            i++;
        }
        return true;
    }
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        map<string, int> mp;
        for(auto &it : Dictionary) {
            string curr = it;
            string tmp = "";
            for(int j = 0; j < curr.size(); j++)
                if(isUpperCase(curr[j]))
                    tmp += curr[j];
            if(isMatch(Pattern, tmp)) mp[curr]++;
        }
        vector<string> res;
        if(mp.size() < 1) {
            res.push_back("-1");
            return res;
        }
        for(auto &it : mp){
            while(it.second) {
                it.second--;
                res.push_back(it.first);
            }
        }
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for(int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for(auto &u: ans) cout << u << " ";
        cout << endl;
    }
    return 0;
}