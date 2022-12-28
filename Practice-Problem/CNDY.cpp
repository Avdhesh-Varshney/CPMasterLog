// Candies
// Problem Code - CNDY

// https://www.codechef.com/problems/CNDY

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        unordered_map<int,int> m;
        for(int i = 0; i < 2*n; i++) {
            int temp;
            cin >> temp;
            m[temp]++;
        }
        bool flag = true;
        for(auto i = m.begin(); i != m.end(); i++) {
            if(i->second > 2) {
                flag = false;
                break;
            }
        }
        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}