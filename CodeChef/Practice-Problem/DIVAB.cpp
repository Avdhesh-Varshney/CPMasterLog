// To Divide or Not To Divide
// Problem Code - DIVAB

// https://www.codechef.com/problems/DIVAB

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int a, b, n;
        cin >> a >> b >> n;
        if(a%b == 0)
            cout << "-1" << endl;
        else {
            int temp = n, x = n/a;
            while(temp%a != 0 or temp%b == 0) {
                temp = (x+1)*a;
                x++;
            }
            cout << temp << endl;
        }
    }
    return 0;
}