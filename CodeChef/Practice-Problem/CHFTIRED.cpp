// Chef and Difficult Contests
// Problem Code - CHFTIRED

// https://www.codechef.com/problems/CHFTIRED

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int a, b, count = 0, temp = 1;
        cin >> a >> b;
        while(count == 0) {
            int s = a, x = a, l = b, y = b;
            s += temp;
            l += (temp-1);
            x += (temp-1);
            y += temp;
            if(s == l or x == y)
                count = 1;
            temp++;
        }
        if(count == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}