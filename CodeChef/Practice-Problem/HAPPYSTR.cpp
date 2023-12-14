// Chef and Happy String
// Problem Code - HAPPYSTR

// https://www.codechef.com/problems/HAPPYSTR

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        string s;
        int count = 0, flag = 0;
        cin >> s;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
                count++;
            else
                count = 0;
            if(count > 2) {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            cout << "Happy" << endl;
        else
            cout << "Sad" << endl;
    }
    return 0;
}