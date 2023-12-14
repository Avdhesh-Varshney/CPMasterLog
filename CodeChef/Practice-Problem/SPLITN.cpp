// Split N
// Problem Code - SPLITN

// https://www.codechef.com/problems/SPLITN

// Solution:
#include <bits/stdc++.h>
using namespace std;
int power(int n) {
    int i = 0;
    while(n > pow(2,i))
        i++;
    if(n == pow(2, i))
        return pow(2, i);
    return pow(2, i-1);
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, count = -1;
        cin >> n;
        while(n >= 1) {
            count++;
            n -= power(n);
        }
        cout << count << endl;
    }
    return 0;
}