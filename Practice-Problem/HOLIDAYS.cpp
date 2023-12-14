// Lazy Salesman
// Problem Code - HOLIDAYS

// https://www.codechef.com/problems/HOLIDAYS

// Solution:
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, w, sum = 0;
        cin >> n >> w;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end(), greater<int>());
        for(int i = 0; i < n; i++) {
            sum += v[i];
            if(sum >= w) {
                cout << n-i-1 << endl;
                break;
            }
        }
    }
    return 0;
}