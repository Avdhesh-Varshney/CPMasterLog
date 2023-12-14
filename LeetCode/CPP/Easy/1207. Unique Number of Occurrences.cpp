// Problem Link:
// https://leetcode.com/problems/unique-number-of-occurrences/

// Solution:
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m, n;
        bool flag = true;
        for(int i = 0; i < arr.size(); i++)
            m[arr[i]]++;
        for(auto i = m.begin(); i != m.end(); i++)
            n[i->second]++;
        for(auto i = n.begin(); i != n.end(); i++)
            if(i->second >= 2)
                flag = false;
        return flag;
    }
};