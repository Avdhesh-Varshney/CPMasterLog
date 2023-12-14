// Chef and the Wildcard Matching
// Problem Code - TWOSTR

// https://www.codechef.com/problems/TWOSTR

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        string x, y;
        int flag = 1;
        cin >> x >> y;
        for(int i = 0; x[i] != '\0'; i++) {
            if(x[i] != y[i] and x[i] != '?' and y[i] != '?')
                flag = 0;
        }
        if(flag == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}