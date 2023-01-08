// 5 January 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    set<string> s;
    map<string, int> m;
    int f(string st) {
        int c = 0;
        for(int i = 1; i <= st.size(); i++) {
            string t = st.substr(0, i);
            if(s.count(t) != 0)
                c++;
            else
                break;
        }
        return c;
    }
    string longestString(vector<string> &w) {
        for(int i = 0; i < w.size(); i++)
            s.insert(w[i]);
        for(int i = 0; i < w.size(); i++)
            m[w[i]] = f(w[i]);
        int ma = 0;
        for(auto x : m)
            ma = max(ma, x.second);
        vector<string> v;
        for(auto x : m)
        if(x.second == ma and x.first.size() == x.second)
            v.push_back(x.first);
        if(v.size() == 0)
            return "";
        return v[0];
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<string> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}
