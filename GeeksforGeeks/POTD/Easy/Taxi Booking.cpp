// 21 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        int ans = INT_MAX, diff = 0;
        for(int i = 0; i < N; i++) {
            diff = abs(pos[i]-cur)*time[i];
            ans = min(ans, diff);
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N, cur;
        cin >> N >> cur;
        vector<int> pos(N), time(N);
        for(int i = 0; i < N; i++)
            cin >> pos[i];
        for(int i = 0; i < N; i++)
            cin >> time[i];
        Solution ob;
        cout << ob.minimumTime(N, cur, pos, time) << endl;
    }
    return 0;
}