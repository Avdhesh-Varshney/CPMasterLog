// Problem Link
// https://leetcode.com/problems/first-unique-character-in-a-string/

// Solution:
class Solution {
public:
    int firstUniqChar(string s) {
        int ans = -1;
        vector<bool> travel(s.length(), true);
        for(int i = 0; i < s.length(); i++) {
            if(travel[i]) {
                for(int j = i+1; j < s.length(); j++) {
                    if(travel[j] && s[i] == s[j]) {
                        travel[j] = false;
                        travel[i] = false;
                    }
                }
            }
        }
        for(int i = 0; i < travel.size(); i++)
            if(travel[i])
                return i;
        return ans;
    }
};