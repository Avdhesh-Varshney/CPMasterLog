// Mode of Frequencies
// Problem Code - MODEFREQ

// https://www.codechef.com/problems/MODEFREQ

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, temp, ans;
        cin >> n;
        unordered_map<int, int> m, freq;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            m[temp]++;
        }
        temp = INT_MIN;
        for(int i = 1; i <= 10; i++)
            freq[m[i]]++;
        for(int i = 1; i <= 10000; i++) {
            if(freq[i] > temp) {
                temp = freq[i];
                ans = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}