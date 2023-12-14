// Covid and Theatre Tickets
// Problem Code - COVID_19

// https://www.codechef.com/problems/COVID_19

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        if(n%2 == 0) {
            if(m%2 == 0)
                cout << (n/2)*(m/2) << endl;
            else
                cout << (n/2)*((m/2) + 1) << endl;
        }
        else {
            if(m%2 == 0)
                cout << ((n/2)+1)*(m/2) << endl;
            else
                cout << ((n/2)+1)*((m/2) + 1) << endl;
        }
    }
    return 0;
}