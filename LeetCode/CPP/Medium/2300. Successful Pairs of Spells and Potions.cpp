// Problem Link
// https://leetcode.com/problems/successful-pairs-of-spells-and-potions/

// Solution:
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        for(int i = 0; i < spells.size(); i++) {
            int st = 0, end = potions.size();
            while(st < end) {
                int mid = st + (end-st)/2;
                if(spells[i]*1LL*potions[mid] >= success)
                    end = mid;
                else
                    st = mid+1;
            }
            if(end == potions.size()-1) {
                if(spells[i]*1LL*potions[end] >= success)
                    spells[i] = 1;
                else
                    spells[i] = 0;
            }
            else
                spells[i] = potions.size() - end;
        }
        return spells;
    }
};