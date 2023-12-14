// Problem Link
// https://leetcode.com/problems/count-items-matching-a-rule/

// Solution:
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int flag = (ruleKey == "type") ? 0 : ((ruleKey == "color") ? 1 : 2);
        int count = 0;
        for(int i = 0; i < items.size(); i++) {
            if(items[i][flag] == ruleValue)
                count++;
        }
        return count;
    }
};