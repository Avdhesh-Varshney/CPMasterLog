// 12 January 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int minimizeSum(int N, vector<int> arr) {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
        int sum = 0;
        while(pq.size() > 1) {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            sum += a+b;
            pq.push(a+b);
        }
        return sum;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minimizeSum(n, arr) << endl;
    }
    return 0;
}
