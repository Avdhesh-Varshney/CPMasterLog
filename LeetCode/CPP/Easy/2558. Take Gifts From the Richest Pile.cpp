// Problem Link
// https://leetcode.com/problems/take-gifts-from-the-richest-pile/description

// Solution:
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq(gifts.begin(), gifts.end());
        while(!pq.empty() and k--) {
            int temp = pq.top();
            pq.pop();
            pq.push(sqrt(temp));
        }
        long long sum = 0;
        while(!pq.empty()) { sum += pq.top(); pq.pop(); }
        return sum;
    }
};