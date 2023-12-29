// https://leetcode.com/problems/find-the-winner-of-an-array-game/description/?envType=daily-question&envId=2023-11-05

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n = arr.size(), cnt = 0;
        if(n <= k) return *max_element(arr.begin(), arr.end());
        priority_queue<int> pq;
        pq.push(arr[0]);
        for(int i = 1; i < n; i++) {
            int temp = pq.top();
            pq.push(arr[i]);
            if(pq.top() == temp) ++cnt;
            else cnt = 1;
            if(cnt >= k) return (temp > arr[i]) ? temp : arr[i];
        }
        return *max_element(arr.begin(), arr.end());
    }
};