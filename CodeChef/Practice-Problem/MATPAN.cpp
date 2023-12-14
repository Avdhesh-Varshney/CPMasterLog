// Mathison and pangrams
// Problem Code - MATPAN

// https://www.codechef.com/problems/MATPAN

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        long long int price[26];
        for(int i = 0; i < 26; i++)
            cin >> price[i];
        string s;
        cin >> s;
        long long int sum = 0;
        for(int i = 0; i < 26; i++) {
            int flag = 0;
            for(int j = 0; j < s.length(); j++) {
                if(97+i == s[j])
                    flag = 1;
            }
            if(flag == 0)
                sum += price[i];
        }
        cout << sum << endl;
    }
    return 0;
}