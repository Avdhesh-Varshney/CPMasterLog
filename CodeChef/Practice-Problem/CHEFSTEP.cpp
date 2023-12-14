// Chef and Steps
// Problem Code - CHEFSTEP

// https://www.codechef.com/problems/CHEFSTEP

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int i = 0;
        for(i = 0; i < n; i++) {
            if(a[i]%k == 0)
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;
    }
    return 0;
}