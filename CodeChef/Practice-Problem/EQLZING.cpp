// Equalizing Numbers
// Problem Code - EQLZING

// https://www.codechef.com/problems/EQLZING

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    /*
    Case i 
    a = a+d; and b = b-d;
    case ii
    a = a-d; and b = b+d;
    */
    int t;
    cin >> t;
    while(t--) {
        int a, b, count = 0, flag = 0;
        cin >> a >> b;
        if(a == b)
            count = 1;
        else {
            for(int d = 1; d <= 1000; d++) {
                int n = a+d;
                int m = b-d;
                if(n == m)
                    count = 1;
                int j = a-d;
                int k = b+d;
                if(j == k)
                    flag = 1;
            }
        }
        if(count == 1 or flag == 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}