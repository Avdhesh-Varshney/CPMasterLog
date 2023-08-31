// 14 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        // code here
        priority_queue<int> pq;
        long long ans = 0;
        for(int i = 0; i < N; i++) pq.push(A[i]);
        while(K--) {
            int temp = pq.top();
            pq.pop();
            ans += temp;
            temp /= 2;
            pq.push(temp);
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N, K;
        cin >> N >> K;
        int A[N];
        for(int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxDiamonds(A, N, K) << endl;
    }
    return 0;
}