// Closest Vowels
// Problem Code - CLOSEVOWEL

// https://www.codechef.com/problems/CLOSEVOWEL

// Solution:
#include <iostream>
#include <math.h>
using namespace std;
long long int N  = 1e9 +7;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        long long int count = 1;
        string s;
        cin >> n >> s;
        for(int i = 0; i < n; i++)
            if(s[i] == 'c' or s[i] == 'g' or s[i] == 'l' or s[i] == 'r')
                count = (2*count) % N;
        cout << count << endl;
    }
    return 0;
}