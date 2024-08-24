// 11 June 2024

class Solution {
  public:
    using ll = long long;
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        // code here
        ll ans = 0, sum = 0;
        int my = n - min(x,n), c = 0; // my = min required value for y
        priority_queue<int> pq;
        for(auto a : arr)
            sum += a;
        for(int i=0;i<n;i++){
            pq.push(brr[i]- arr[i]);
        }
        // adjust the sum to the minimum required value of y
        while(c < my){
            sum += pq.top();
            pq.pop();
            c++;
        }
        // look for alternative 
        // u can break as well if pq.top() < 0
        while(c <= y){
            ans = max(ans, sum);
            sum += pq.top();
            pq.pop();
            c++;
        }
        return ans;
    }
};