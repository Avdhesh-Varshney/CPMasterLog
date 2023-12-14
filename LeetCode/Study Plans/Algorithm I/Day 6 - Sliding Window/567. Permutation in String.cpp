// Question 2

// Problem Link
// https://leetcode.com/problems/permutation-in-string/

// Solution:

// Way :- 1
class Solution {
    bool areVectorsEqual(vector<int> a, vector<int> b) {
        for(int i = 0; i < 26; i++)
            if(a[i] != b[i])
                return false;
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size() < s1.size())
            return false;
        vector<int> freqS1(26, 0);
        for(char c: s1)
            freqS1[c-'a']++;
        vector<int> freqS2(26, 0);
        int i = 0, j = 0;
        while(j < s2.size()) {
            freqS2[s2[j]-'a']++;
            if(j-i+1 == s1.size()) {
                if(areVectorsEqual(freqS1, freqS2))
                    return true;
            }
            if(j-i+1 < s1.size())
                j++;
            else {
                freqS2[s2[i]-'a']--;
                i++;
                j++;
            }
        }
        return false;
    }
};

// Way :- 2
class Solution {
public:
    bool check(vector<int>& v) {
        for(auto &i : v) if(i != 0) return false;
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s2.size() < s1.size()) return false;
        vector<int> freq(26, 0);
        for(int i = 0; i < s1.size(); i++) {
            freq[s2[i]-'a']++;
            freq[s1[i]-'a']--;
        }
        if(check(freq)) return true;
        for(int i = s1.size(); i < s2.size(); i++) {
            freq[s2[i]-'a']++;
            freq[s2[i-s1.size()]-'a']--;
            if(check(freq)) return true;
        }
        return false;
    }
};