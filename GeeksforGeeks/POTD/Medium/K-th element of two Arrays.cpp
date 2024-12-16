// 16 Dec, 2024

class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq(a.begin(), a.end());
        for(auto &i : b) pq.push(i);
        while(k > 1) { pq.pop(); --k; }
        return pq.top();
    }
};