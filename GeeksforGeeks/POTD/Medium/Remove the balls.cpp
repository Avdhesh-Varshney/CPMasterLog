// 14 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int finLength(int N, vector<int> color, vector<int> radius) {
        for(int i = 1; i < color.size(); i++) {
            if(color[i-1] == color[i] && radius[i-1] == radius[i]) {
                color.erase(color.begin()+i-1, color.begin()+i+1);
                radius.erase(radius.begin()+i-1, radius.begin()+i+1);
                i -= 2;
            }
        }
        return color.size();
    }
};

int main() {
    int tt;
    cin >> tt;
    Solution sol;
    while(tt--) {
        int n;
        cin >> n;
        vector<int> color(n), radius(n);
        for(int i = 0; i < n; i++) cin >> color[i];
        for(int i = 0; i < n; i++) cin >> radius[i];
        int ans = sol.finLength(n, color, radius);
        cout << ans << endl;
    }
    return 0;
}