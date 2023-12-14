// 09 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
    void permutation(vector<string>& v, string temp, string s, int k) {
        if(temp.length() == s.length()) {
            v.emplace_back(temp);
            return;
        }
        for(int i = 0; i < s.length(); i++) {
            if(!((k >> i) & 1LL)) permutation(v, temp+s[i], s, (k | (1 << i)));
        }
    }
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> v;
		    permutation(v, "", S, 0);
		    sort(v.begin(), v.end());
		    auto it = unique(v.begin(), v.end());
		    v.resize(distance(v.begin(),it));
		    return v;
		}
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.find_permutation(S);
        for(auto &i : ans) cout << i << " ";
        cout << endl;
    }
    return 0;
}