// Problem Link
// https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

// Solution:
static const auto speedup = []() {
std::ios::sync_with_stdio(false); std::cin.tie(nullptr); return 0;
}();
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(auto op : operations) {
            if(op[0] == '+' or op[2] == '+')
                x++;
            else if(op[0] == '-' or op[2] == '-')
                x--;
        }
        return x;
    }
};