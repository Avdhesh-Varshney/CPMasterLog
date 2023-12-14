// Chef and String
// Problem Code - XYSTR

// https://www.codechef.com/problems/XYSTR

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int i = 0, count = 0;
        while(s[i] != '\0') {
            if(s[i] == 'x' and s[i+1] == 'y') {
                count++;
                i++;
            }
            else if(s[i] == 'y' and s[i+1] == 'x') {
                count++;
                i++;
            }
            i++;
        }
        cout << count << endl;
    }
    return 0;
}