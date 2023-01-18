// Travel Pass
// Problem Code - TRAVELPS

// https://www.codechef.com/problems/TRAVELPS

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, a, b, sum = 0;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        for(int i = 0; s[i] != '\0'; i++) {
            if(s[i] == '1')
                sum += b;
            else if(s[i] == '0')
                sum += a;
        }
        cout << sum << endl;
    }
    return 0;
}