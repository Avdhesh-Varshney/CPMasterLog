// Vaccine Distribution
// Problem Code - VACCINE2

// https://www.codechef.com/problems/VACCINE2

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, d;
        cin >> n >> d;
        int ans = 0;
        vector<int> a, b;
        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            if(temp >= 80 or temp <= 9)
                a.push_back(temp);
            else
                b.push_back(temp);
        }
        if(b.size()%d == 0)
            ans += b.size()/d;
        else
            ans += b.size()/d + 1;
        if(a.size()%d == 0)
            ans += a.size()/d;
        else
            ans += a.size()/d + 1;
        cout << ans << endl;
    }
    return 0;
}