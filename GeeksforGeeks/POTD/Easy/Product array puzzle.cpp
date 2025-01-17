// 17 Jan, 2025

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        long long res = 1;
        int check = 2;
        for(auto &i : arr) {
            if(i == 0) --check;
            else res *= i;
        }
        if(check <= 0) {
            vector<int> ans(arr.size(), 0);
            return ans;
        } else if(check == 1) {
            for(auto &i : arr) {
                if(i == 0) i = res;
                else i = 0;
            }
        } else for(auto &i : arr) i = (int)res/i;
        return arr;
    }
};