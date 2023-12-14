// 29 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int countSubstring(string S)
    {
        // code here
        int ans = 0;
        for(int i = 0; i < S.length(); i++) {
            int s = 0, c = 0;
            for(int j = i; j < S.length(); j++) {
                if(S[j] >= 'a') s++;
                else c++;
                if(s == c) ans++;
            }
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        string S;
        cin >> S;
        Solution obj;
        cout << obj.countSubstring(S) << endl;
    }
    return 0;
}