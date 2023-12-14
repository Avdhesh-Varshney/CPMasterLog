// Chef and Feedback
// Problem Code - ERROR

// https://www.codechef.com/problems/ERROR

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        string s;
        int flag = 0;
        cin >> s;
        for(int i = 0; s[i+2] != '\0'; i++) {
            if((s[i] == '0' and s[i+1] == '1' and s[i+2] == '0') or (s[i] == '1' and s[i+1] == '0' and s[i+2] == '1'))
                flag = 1;
        }
        if(flag == 1)
            cout << "Good" << endl;
        else
            cout << "Bad" << endl;
    }
    return 0;
}