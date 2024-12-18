// 18 Dec, 2024

class Solution {
    int students(vector<int>& arr, int& mid) {
        int ans = 1, curr = 0;
        for(auto &i : arr) {
            curr += i;
            if(curr > mid) {
                ++ans;
                curr = i;
            }
        }
        return ans;
    }
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(n < k) return -1;
        int large = 0, sum = 0;
        for(auto &i : arr) {
            large = max(large, i);
            sum += i;
        }
        int l = large, r = sum, ans = -1;
        while(l <= r) {
            int mid = l + (r - l)/2;
            int stu = students(arr, mid);
            if(stu > k) l = mid + 1;
            else {
                r = mid - 1;
                ans = mid;
            }
        }
        return ans;
    }
};