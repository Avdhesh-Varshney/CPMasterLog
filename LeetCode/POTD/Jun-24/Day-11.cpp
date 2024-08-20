// https://leetcode.com/problems/relative-sort-array/description/?envType=daily-question&envId=2024-06-11

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        sort(arr1.begin(), arr1.end());
        vector<int> ans;
        int n = arr1.size();
        for(auto &i: arr2) {
            auto id = find(arr1.begin(), arr1.end(), i) - arr1.begin();
            while(id < n && arr1[id] == i) {
                ans.emplace_back(arr1[id]);
                arr1[id++] = -1;
            }
        }
        for(auto &i : arr1) if(i != -1) ans.emplace_back(i);
        return ans;
    }
};