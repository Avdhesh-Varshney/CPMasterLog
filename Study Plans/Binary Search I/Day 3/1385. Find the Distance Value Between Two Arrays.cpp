// Question 2

// Problem Link
// https://leetcode.com/problems/find-the-distance-value-between-two-arrays/

// Solution:
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;
        sort(arr2.begin(), arr2.end());
        for(int &i : arr1) {
            int index = lower_bound(arr2.begin(), arr2.end(), i) - arr2.begin();
            int closest = INT_MAX;
            if(index > 0) closest = min(closest, abs(arr2[index-1]-i));
            if(index < arr2.size()) closest = min(closest, abs(arr2[index]-i));
            if(closest > d) ans++;
        }
        return ans;
    }
};