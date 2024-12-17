// 17 Dec, 2024

class Solution {
    bool placed(int& n, vector<int>& stalls, int& mid, int& k) {
        int cow = 1, li = 0;
        for(int i = 1; i < n; i++) {
            if(stalls[i]-stalls[li] >= mid) { ++cow; li = i; }
            if(cow >= k) return true;
        }
        return false;
    }
  public:

    int aggressiveCows(vector<int> &stalls, int k) {
        // Write your code here
        sort(stalls.begin(), stalls.end());
        int n = stalls.size(), mini = 1, maxi = stalls[n-1]-stalls[0];
        while(mini <= maxi) {
            int mid = (mini + maxi) >> 1;
            if(placed(n, stalls, mid, k)) mini = mid + 1;
            else maxi = mid - 1;
        }
        return maxi;
    }
};