// 19 Dec, 2024

class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
        int num = 1;
        unordered_map<int, bool> m;
        for(auto &i : arr) m[i] = true;
        while(k > 0) if(!m[num++]) --k;
        return --num;
    }
};