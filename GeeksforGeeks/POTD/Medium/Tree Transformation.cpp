// 22 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int solve(int N, vector<int> p){
        // code here
        set<int> s;
        for(auto &i : p) if(i != -1 && i != 0) s.insert(i);
        return s.size();
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N;
        cin >> N;
        vector<int> p(N);
        for(auto &val : p) cin >> val;

        Solution obj;
        cout << obj.solve(N, p) << endl;
    }
    return 0;
}