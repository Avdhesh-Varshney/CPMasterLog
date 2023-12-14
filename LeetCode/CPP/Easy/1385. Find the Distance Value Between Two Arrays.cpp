// Problem Link
// https://leetcode.com/problems/find-the-distance-value-between-two-arrays/

// Solution:

// Way :- 1
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

// Way :- 2
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int cnt = 0;
        for(int i = 0; i < arr1.size(); i++) {
            int low = 0;
            int high = arr2.size()-1;
            while(low <= high) {
                int mid = (high+low)/2;
                if(abs(arr1[i]-arr2[mid]) <= d) break;
                if (arr1[i] > arr2[mid]) low = mid+1;
                else high = mid-1;
            }
            if (low > high) cnt++;
        }
        return cnt;
    }
};