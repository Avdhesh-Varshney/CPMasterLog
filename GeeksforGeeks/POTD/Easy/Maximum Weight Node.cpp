// 20 January 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxWeightCell(int N, vector<int> Edge)
    {
        // code here
        unordered_map<int, int> um1;
        for(int i = 0; i < N; i++) {
            int num = Edge[i];
            um1[num] += i;
        }
        int max_sum = 0, ans = 0;
        for(int i = 0; i < N; i++) {
            if(um1.find(i) != um1.end()) {
                if(max_sum <= um1[i]) {
                    max_sum = um1[i];
                    ans = i;
                }
            }
        }
        return ans;
    }
};

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int N;
        cin >> N;
        vector<int> Edge(N);
        for(int i = 0; i < N; i++)
            cin >> Edge[i];
        Solution obj;
        int ans = obj.maxWeightCell(N, Edge);
        cout << ans << endl;
    }
    return 0;
}
