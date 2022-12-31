// Problem Link
// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

// Solution:
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        for(auto i : candies) {
            int flag = 0;
            for(auto j : candies) {
                if(i+extraCandies < j)
                    flag = 1;
            }
            if(flag == 0)
                result.push_back(true);
            else
                result.push_back(false);
        }
        return result;
    }
};