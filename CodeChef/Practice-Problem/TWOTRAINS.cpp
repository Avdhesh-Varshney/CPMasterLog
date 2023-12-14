// Two Trains
// Problem Code - TWOTRAINS

// https://www.codechef.com/problems/TWOTRAINS

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
        int p[n-1], sum = 0, large = 0;
        for(int i = 0; i < n-1; i++) {
            cin >> p[i];
            sum += p[i];
            if(p[i] > large)
                large = p[i];
        }
        cout << sum+large << endl;
    }
    return 0;
}