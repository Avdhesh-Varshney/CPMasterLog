#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n, k, temp;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        priority_queue<int> pq;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            pq.push(temp);
        }
        int coins = 0;
        while(!pq.empty()) {
            if(coins + pq.top() <= k) coins += pq.top();
            else break;
            pq.pop();
        }
        cout << k - coins << endl;
    }
    return 0;
}