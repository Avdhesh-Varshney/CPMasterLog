// https://leetcode.com/problems/build-an-array-with-stack-operations/description/?envType=daily-question&envId=2023-11-03

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int cnt = 0;
        for(int i = 1, j = 0; i <= n && j < target.size(); i++) {
            if(i == target[j]) {
                ++j;
                while(cnt && cnt--) ans.emplace_back("Pop");
            } else ++cnt;
            ans.emplace_back("Push");
        }
        return ans;
    }
};