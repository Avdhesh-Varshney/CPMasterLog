// Sum of palindromic numbers
// Problem Code - SPALNUM

// https://www.codechef.com/problems/SPALNUM

// Solution:
#include <iostream>
using namespace std;
bool ispalin(long long int n) {
    string s = to_string(n);
    for(int i = 0; i < s.length()/2; i++)
        if(s[i] != s[s.length()-1-i])
            return false;
    return true;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        long long int l, r, sum = 0;
        cin >> l >> r;
        for(long long int i = l; i <= r; i++)
            if(ispalin(i))
                sum += i;
        cout << sum << endl;
    }
    return 0;
}