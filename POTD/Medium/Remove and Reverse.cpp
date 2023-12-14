// 24 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removeReverse(string S) {
        // code here
        int n = S.size();
        unordered_map<char, int> freq;
        for(int i = 0; i < n; i++)
            freq[S[i]]++;
        int low = 0, high = n-1, path = 0;
        while(low <= high) {
            if(path == 0) {
                if(freq[S[low]] == 1)
                    low++;
                else {
                    freq[S[low]]--;
                    S[low] = '*';
                    low++;
                    path = 1;
                }
            }
            else {
                if(freq[S[high]] == 1)
                    high--;
                else {
                    freq[S[high]]--;
                    S[high] = '*';
                    high--;
                    path = 0;
                }
            }
        }
        string res;
        for(int i = 0; i < n; i++)
            if(S[i] != '*')
                res.push_back(S[i]);
        if(path == 1)
            reverse(res.begin(), res.end());
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        string S;
        cin >> S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout << ans << endl;
    }
    return 0;
}