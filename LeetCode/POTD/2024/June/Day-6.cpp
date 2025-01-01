// https://leetcode.com/problems/hand-of-straights/description/?envType=daily-question&envId=2024-06-06

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n%groupSize != 0) return false;
        sort(hand.begin(), hand.end());
        int st = 0;
        while(st < n) {
            if(hand[st] != -1) {
                if(!check(hand, hand[st]+1, groupSize-1)) return false;
                hand[st] = -1;
            } ++st;
        }
        return true;
    }
    bool check(vector<int>& hand, int val, int groupSize) {
        while(groupSize > 0) {
            auto it = find(hand.begin(), hand.end(), val);
            if(it == hand.end()) return false;
            *it = -1; ++val; --groupSize;
        }
        return true;
    }
};