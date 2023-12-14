// Problem Link
// https://leetcode.com/problems/check-if-n-and-its-double-exist/

// Solution:
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s;
        for(int i = 0; i < arr.size(); i++) {
            if((s.count(arr[i] * 2) > 0) || (arr[i] % 2 == 0 && s.count(arr[i] / 2) > 0))
                return true;
            s.insert(arr[i]);
        }
        return false;
    }
};