// 08 Jan, 2025

class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        // code here
        // 0 4 28 33 38 45 
        sort(arr.begin(), arr.end());
        int n = arr.size(), ans = 0;
        for(int i = 0; i < n; i++)
            for(int j = i+1; j < n; j++)
                ans += lower_bound(arr.begin()+j+1, arr.end(), arr[i]+arr[j]) - arr.begin()-j-1;
        return ans;
    }
};