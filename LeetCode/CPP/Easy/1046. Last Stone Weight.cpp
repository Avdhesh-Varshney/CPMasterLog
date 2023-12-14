// Problem Link
// https://leetcode.com/problems/last-stone-weight/

// Solution:
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(), stones.end(), greater<int>());
        while(stones.size() > 1) {
            if(stones[0] == stones[1]) stones.erase(stones.begin(), stones.begin()+2);
            else {
                stones[0] -= stones[1];
                stones.erase(stones.begin()+1, stones.begin()+2);
                sort(stones.begin(), stones.end(), greater<int>());
            }
        }
        if(stones.size() == 0) return 0;
        return stones[0];
    }
};