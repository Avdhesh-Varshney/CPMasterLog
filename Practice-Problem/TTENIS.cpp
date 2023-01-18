// Chef and Table Tennis
// Problem Code - TTENIS

// https://www.codechef.com/problems/TTENIS

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        string s;
        int count1 = 0, count0 = 0;
        cin >> s;
        for(int i = 0; s[i] != '\0'; i++) {
            if(s[i] == '1')
                count1++;
            else
                count0++;
        }
        if(count1 == 10 and count0 == 10)
            cout << "WIN" << endl;
        else if(count0 <= count1)
            cout << "WIN" << endl;
        else
            cout << "LOSE" << endl;
    }
    return 0;
}