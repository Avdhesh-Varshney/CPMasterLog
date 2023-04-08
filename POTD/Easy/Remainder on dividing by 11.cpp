// 03 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int xmod11(string x)
    {
       // code here
        int n = x.length(), r = 0;
        for(int i = 0; i < n; i++) {
           int num = r*10+(int)(x[i] - '0');
           r = num%11;
        }
        return r;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        string x;
        cin >> x;
        Solution ob;
        int ans = ob.xmod11(x);
        cout << ans << endl;
    }
    return 0;
}