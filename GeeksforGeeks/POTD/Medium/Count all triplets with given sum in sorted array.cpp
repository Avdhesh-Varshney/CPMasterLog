// 04 Jan, 2025

class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        // Code Here
        int cnt = 0, n = arr.size();
        for(int i = 0; i < n; i++) {
            int j = i+1, k = n-1;
            while(j < k) {
                int sum = arr[i] + arr[j] + arr[k];
                if(sum == target) {
                    ++cnt;
                    int temp = j+1;
                    while(temp < k && arr[temp] == arr[temp-1]) ++cnt, ++temp;
                    --k;
                } else if(sum > target) --k;
                else ++j;
            }
        }
        return cnt;
    }
};