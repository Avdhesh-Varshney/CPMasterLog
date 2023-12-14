// Motivation
// Problem Code - IMDB

// https://www.codechef.com/problems/IMDB

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        int s[n], r[n], large = -1;
        for(int i = 0; i < n; i++)
            cin >> s[i] >> r[i];
        for(int j = 0; j < n; j++) {
            if(s[j] <= x) {
                if(large < r[j])
                    large = r[j];
            }
        }
        cout << large << endl;
    }
    return 0;
}