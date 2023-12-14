// Chef and Magical Jars
// Problem Code : MAGICJAR

// https://www.codechef.com/problems/MAGICJAR

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        long long int temp, ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            ans += (temp-1);
        }
        cout << ans+1 << endl;
    }
    return 0;
}