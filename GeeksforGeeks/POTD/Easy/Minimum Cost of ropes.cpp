// 11 September, 2024

class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        // Your code here
        if(arr.size() <= 1) return 0;
        priority_queue<long long, vector<long long>, greater<long long> > pq;
        for(auto &i : arr) pq.push(i);
        long long ans = 0;
        while(!pq.empty()) {
            int val = pq.top(); pq.pop();
            int temp = val + pq.top(); pq.pop();
            ans += temp;
            if(!pq.empty()) pq.push(temp);
        }
        return ans;
    }
};