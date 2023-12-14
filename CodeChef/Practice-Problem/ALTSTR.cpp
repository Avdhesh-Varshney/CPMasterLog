// Alternating String
// Problem Code - ALTSTR

// https://www.codechef.com/problems/ALTSTR

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, count1 = 0, count0 = 0;
        string s;
        cin >> n >> s;
        for(int i = 0; s[i] != '\0'; i++) {
            if(s[i] == '1')
                count1++;
            else if(s[i] == '0')
                count0++;
        }
        if(count1 == count0 or count1 == count0-1 or count1-1 == count0)
            cout << n << endl;
        else if(count0 == 0 or count1 == 0)
            cout << "1" << endl;
        else {
            int ans = 2*(min(count1, count0));
            cout << ans+1 << endl;
        }
    }
    return 0;
}