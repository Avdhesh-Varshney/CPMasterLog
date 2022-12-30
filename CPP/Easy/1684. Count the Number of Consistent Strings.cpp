// Problem Link:
// https://leetcode.com/problems/count-the-number-of-consistent-strings/

// Solution:
class Solution {
public:
    bool check(string allowed, string str) {
        set<char> s;
        for(int i = 0; i < str.length(); i++)
            s.insert(str[i]);
        for(auto i : s) {
            int f = 0;
            for(int j = 0; j < allowed.length(); j++) {
                if(i == allowed[j])
                    continue;
                else
                    f++;
            }
            if(f == allowed.length())
                return false;
        }
        return true;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0, flag = 1;
        for(auto j : words) {
            bool flag = check(allowed, j);
            if(flag)
                count++;
        }
        return count;
    }
};