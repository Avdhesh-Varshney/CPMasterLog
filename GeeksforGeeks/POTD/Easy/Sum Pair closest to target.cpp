// 06 Jan, 2025

class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        if(n < 2) return {};
        sort(arr.begin(), arr.end());
        if(target <= arr[0]) return {arr[0], arr[1]};
        int s = 0, e = n-1;
        int diff = abs(target - arr[s] - arr[e]);
        vector<int> res = {arr[s], arr[e]};
        while(s < e) {
            int temp = abs(target - arr[s] - arr[e]);
            if(temp < diff) {
                diff = temp;
                res = {arr[s], arr[e]};
            } else if(temp == diff) {
                if(res[1]-res[0] < arr[e]-arr[s]) res = {arr[s], arr[e]};
            }
            if(arr[s]+arr[e] > target) e--;
            else if(arr[s]+arr[e] < target) s++;
            else return {arr[s], arr[e]};
        }
        return res;
    }
};