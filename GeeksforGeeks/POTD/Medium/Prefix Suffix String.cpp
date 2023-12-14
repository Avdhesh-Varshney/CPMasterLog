// 21 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int prefixSuffixString(vector<string> &s1,vector<string> s2){
        // Code here
        int count = 0, l2 = s2.size();
        unordered_map<string, bool> mp;
        for(auto &x: s1) {
            string temp = "";
            for(int i = 0; i < x.length(); i++) {
                temp += x[i];
                mp[temp] = true;
            }
            string temp1 = "";
            for(int i = x.length()-1; i >= 0; i--) {
                temp1 = x[i]+temp1;
                mp[temp1] = true;
            }
        }
        for(int i = 0; i < l2; i++) {
            string ans = s2[i];
            if(mp.find(ans) != mp.end()) count++;
        }
        return count;
    }
};

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        string str1, str2, newline;
        if(i == 0)
        getline(cin, newline);
        getline(cin, str1);
        getline(cin, str2);

        vector<string> s1, s2;
        stringstream ss1(str1);
        stringstream ss2(str2);
        string str;
        while(ss1 >> str) s1.push_back(str);
        while(ss2 >> str) s2.push_back(str);

        Solution ob;
        cout << ob.prefixSuffixString(s1, s2) << endl;
    }
    return 0;
}