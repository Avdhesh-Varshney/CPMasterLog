// 27 Dec, 2024

class Solution {
    int combinations(int &n) {
        return (n*(n-1))/2;
    }
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        int ans = 0, n = arr.size();
        unordered_map<int, int> m1, m2;
        for(auto &i : arr) m1[i]++;
        for(int i = 0; i < n; i++) {
            if(m2[arr[i]] > 0 || m2[target-arr[i]] > 0) continue;
            if(m1[target-arr[i]] > 0) {
                if(arr[i] == target-arr[i]) {
                    ans += combinations(m1[target-arr[i]]);
                } else ans += m1[arr[i]] * m1[target-arr[i]];
                m2[arr[i]] = 1; m2[target-arr[i]] = 1;
            }
        }
        return ans;
    }
};