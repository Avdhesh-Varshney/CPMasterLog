// Problem Link: https://leetcode.com/problems/count-prefix-and-suffix-pairs-i/

// Solution:
class Solution {
    bool isPrefixAndSuffix(int& l1, string& s1, int& l2, string& s2) {
        if(s2.substr(0, l1) == s1 && s2.substr(l2-l1, l1) == s1) return true;
        return false;
    }
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans = 0, n = words.size();
        for(int i = 0; i < n; i++) {
            int l1 = words[i].length();
            for(int j = i+1; j < n; j++) {
                if(words[i] == words[j]) { ++ans; continue; }
                int l2 = words[j].length();
                if(l2 >= l1 && isPrefixAndSuffix(l1, words[i], l2, words[j])) ++ans;
            }
        }
        return ans;
    }
};