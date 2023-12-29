// https://leetcode.com/problems/eliminate-maximum-number-of-monsters/description/?envType=daily-question&envId=2023-11-07

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int monsters = 0, time = 0;
        priority_queue<int, vector<int>, greater<int> > pq;
        for(int i = 0; i < dist.size(); i++) {
            if(dist[i]%speed[i] == 0) pq.push(dist[i] / speed[i]);
            else pq.push((dist[i] / speed[i]) + 1);
        }
        while(!pq.empty()) {
            if(pq.top() < time+1) break;
            ++monsters;
            ++time;
            pq.pop();
        }
        return monsters;
    }
};