// 8 September 2024

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // Your code here
        if(arr[0] == 0) return -1;
        int jumps = 1, n = arr.size(), id = 0;
        while(id < n && id + arr[id] < n-1) {
            int large = 0, temp = id;
            for(int i = id+1; i <= id + arr[id]; i++) {
                if(i > n) break;
                if(large < i + arr[i]) {
                    large = i+arr[i];
                    temp = i;
                }
            }
            if(id == temp) return -1;
            else { id = temp; ++jumps; }
        }
        return jumps;
    }
};