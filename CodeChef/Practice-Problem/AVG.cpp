// Average Number
// Problem Code - AVG

// https://www.codechef.com/problems/AVG

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, k, v;
        cin >> n >> k >> v;
        int sum = 0, a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        if(sum >= (n+k)*v)
            cout << "-1" << endl;
        else {
            int left = (n+k)*v - sum;
            if(left%k == 0)
                cout << left/k << endl;
            else
                cout << "-1" << endl;
        }
    }
    return 0;
}