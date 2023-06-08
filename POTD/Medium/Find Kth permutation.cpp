// 08 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        // code here
        int fact = 1;
        string res = "";
        vector<int> vis(n+1, 0);
        for(int i = 1; i < n; i++) fact*=i;
        for(int i = 1; i < n; i++) {
            for(int j = 1; j <= n; j++) {
                if(vis[j] == 0) {
                    if(fact >= k) {
                        vis[j] = 1;
                        res += to_string(j);
                        break;
                    }
                    k -= fact;
                }
            }
            fact /= (n-i);
        }
        for(int i = 1; i <= n; i++)
            if(vis[i] == 0)
                res += to_string(i);
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans << endl;
    }
    return 0;
}