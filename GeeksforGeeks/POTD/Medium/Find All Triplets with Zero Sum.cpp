// 28 Dec, 2024

class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        vector<vector<int>> ans;
        int n = arr.size();
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                for(int k = j+1; k < n; k++) {
                    if(arr[i]+arr[j]+arr[k] == 0) {
                        vector<int> temp = {i, j, k};
                        ans.emplace_back(temp);
                    }
                }
            }
        }
        return ans;
    }
};