// Chef in Vaccination Queue
// Problem Code - VACCINQ

// https://www.codechef.com/problems/VACCINQ

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, p, x, y;
        cin >> n >> p >> x >> y;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int count = 0;
        for(int i = 0; i < p; i++) {
            if(a[i] == 0)
                count += x;
            else if(a[i] == 1)
                count += y;
        }
        cout << count << endl;
    }
    return 0;
}