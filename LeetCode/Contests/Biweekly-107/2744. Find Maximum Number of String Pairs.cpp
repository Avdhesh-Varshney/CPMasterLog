// Problem Link - https://leetcode.com/contest/biweekly-contest-107/problems/find-maximum-number-of-string-pairs/

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ans = 0, n = words.size();
        vector<bool> travel(n, true);
        for(int i = 0; i < n; i++) {
            if(travel[i]) {
                for(int j = i+1; j < n; j++) {
                    if(travel[j] && words[j][1] == words[i][0] && words[j][0] == words[i][1]) {
                        ++ans;
                        travel[j] = false;
                        travel[i] = false;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};