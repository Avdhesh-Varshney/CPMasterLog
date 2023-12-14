// Problem Link
// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

// Solution:

// Way :- 1
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

// Way :- 2
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int large = *max_element(candies.begin(), candies.end());
        vector<bool> ans(candies.size(), true);
        for(int i = 0; i < candies.size(); i++)
            if(candies[i] + extraCandies < large) ans[i] = false;
        return ans;
    }
};