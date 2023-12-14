// 20 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        // code here
        map<int, int> m;
        for(auto &i : hand) m[i]++;
        if(N%groupSize != 0) return false;
        while(!m.empty()) {
            int x = m.begin()->first;
            --m[x];
            if(m[x] == 0) m.erase(x);
            for(int i = 1; i < groupSize; i++) {
                if(m.find(x+i) == m.end()) return false;
                else {
                    --m[x+i];
                    if(m[x+i] == 0) m.erase(x+i);
                }
            }
        }
        return true;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N, groupSize;
        cin >> N >> groupSize;
        vector<int> hand(N);
        for(int i = 0; i < N; i++) cin >> hand[i];
        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if(ans) cout << "True" << endl;
        else cout << "False" << endl;
    }
    return 0;
}