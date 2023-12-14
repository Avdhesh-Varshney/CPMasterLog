// 08 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int modulo(string s,int m)
        {
            //code here
            int res = 0;
            for(const auto& x: s){
                res = res*2 + (x-'0');
                res = res%m;
            }
            return res;
        }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        int m;
        cin >> s >> m;
        Solution a;
        cout << a.modulo(s, m) << endl;
    }
    return 0;
}