// Permutation Creation
// Problem Code - PERMCREATE

// https://www.codechef.com/problems/PERMCREATE

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
        if(n <= 3)
            cout << "-1" << endl;
        else if(n == 4)
            cout << "3 1 4 2" << endl;
        else {
            for(int i = 1; i <= n; i += 2)
                cout << i << " ";
            for(int i = 2; i <= n; i += 2)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}