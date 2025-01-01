// https://leetcode.com/problems/valid-anagram/description/?envType=daily-question&envId=2023-12-16

class Solution {
private:
    int arr[26] = {0};
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        for(int i = 0; i < s.size(); i++) {
            int idx = s[i] - 'a';
            arr[idx]++;
        }
        for(int j = 0; j < t.size(); j++) {
            int idx = t[j] - 'a';
            arr[idx]--;
        }
        for(int k = 0; k < 26; k++) if(arr[k] != 0) return false;
        return true;
    }
};