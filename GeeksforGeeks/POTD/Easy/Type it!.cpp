// 25 January 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:	
	int minOperation(string s) {
        // code here
        int n = s.length(), mid = n/2, match = 0;
        if(n == 0 || n == 1)
            return n;
        int i = 0, j = mid;
        while(i < mid) {
            if(s[i] == s[j]) {
                match++;
                j++;
            }
            else {
                mid--;
                j = mid;
                i = 0;
                match = 0;
                continue;
            }
            i++;
        }
        return n-match+1;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << endl;
    }
    return 0;
}
