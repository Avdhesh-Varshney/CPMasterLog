// Chef and Serves
// Problem Code - CHSERVE

// https://www.codechef.com/problems/CHSERVE

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int p1, p2, k;
        cin >> p1 >> p2 >> k;
        if(((p1+p2)/k)%2 == 0)
            cout << "CHEF" << endl;
        else
            cout << "COOK" << endl;
    }
    return 0;
}