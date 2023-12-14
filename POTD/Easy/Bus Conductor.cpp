// 21 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findMoves(int n, vector<int> chairs, vector<int> passengers) {
        int ans = 0;
        sort(chairs.begin(), chairs.end());
        sort(passengers.begin(), passengers.end());
        for(int i = 0; i < n; i++)
            ans += abs(chairs[i]-passengers[i]);
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;
    while(t--) {
        int n;
        cin >> n;
        vector<int> chairs(n), passengers(n);
        for(auto &val : chairs) cin >> val;
        for(auto &val : passengers) cin >> val;
        int ans = sol.findMoves(n, chairs, passengers);
        cout << ans << endl;
    }
    return 0;
}