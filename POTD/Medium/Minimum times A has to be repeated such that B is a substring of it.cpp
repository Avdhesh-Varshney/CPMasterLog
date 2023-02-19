// 31 January 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minRepeats(string a, string b) {
        // code here
        int ans = 0, n =a.size(), m =b.size();
        unordered_map<char, int> check;
        for(int i = 0; i < n; i++)
            check[a[i]]++;
        for(int i = 0; i < m; i++)
            if(check.find(b[i]) == check.end())
                return -1;
        int i = 0, j = 0;
        bool firstpass = true;
        while(j < m) {
            if(a[i] == b[j]) {
                i++;
                j++;
                firstpass = false;
                continue;
            }
            else {
                if(firstpass) {
                    i++;
                    continue;
                }
                else if(i == n) {
                    ans++;
                    i = 0;
                }
                else
                    return -1;
            }
        }
       return ans + 1;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        string A, B;
        getline(cin, A);
        getline(cin, B);
        Solution ob;
        cout << ob.minRepeats(A, B) << endl;
    }
    return 0;
}
