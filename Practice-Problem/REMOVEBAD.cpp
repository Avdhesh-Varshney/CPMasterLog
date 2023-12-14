// Remove Bad elements
// Problem Code - REMOVEBAD

// https://www.codechef.com/problems/REMOVEBAD

// Solution:
#include <bits/stdc++.h>
using namespace std;
int result(int n, int arr[]) {
    unordered_map<int, int> freq;
    for(int i = 0; i < n; i++)
        freq[arr[i]]++;
    int large = INT_MIN;
    for(auto i = freq.begin(); i != freq.end(); i++)
        large = max(large, i->second);
    return n-large;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int ans = result(n, a);
        cout << ans << endl;
    }
    return 0;
}