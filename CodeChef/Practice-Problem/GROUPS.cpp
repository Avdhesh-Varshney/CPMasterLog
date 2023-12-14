// Chef and Groups
// Problem Code - GROUPS

// https://www.codechef.com/problems/GROUPS

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        string s;
        int count = 0, flag = 1;
        cin >> s;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '1' and flag == 1) {
                count++;
                flag = 0;
            }
            else if(s[i] == '0'){
                flag = 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}