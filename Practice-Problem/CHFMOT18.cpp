// Chef and Demonetisation
// Problem Code - CHFMOT18

// https://www.codechef.com/problems/CHFMOT18

// Solution:
#include <iostream>
#define ll long long int
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        ll s, n, ans = 0;
        cin >> s >> n;
        if(s%2 == 1) {
            ans++;
            s--;
        }
        while(true) {
            ans += s/n;
            s = s%n;
            n = s;
            if(n == 0)
                break;
        }
        cout << ans << endl;
    }
    return 0;
}