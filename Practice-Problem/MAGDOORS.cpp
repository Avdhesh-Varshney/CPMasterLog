// Magical Doors
// Problem Code - MAGDOORS

// https://www.codechef.com/problems/MAGDOORS

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
        int flag = (s[0] == '1')? 0: 1;
        int count = (flag == 1)? 1: 0;
        for(int i = 0; s[i] != '\0'; i++) {
            if(s[i] == '1' and flag == 1) {
                count++;
                flag = 0;
            }
            else if(s[i] == '0' and flag == 0) {
                count++;
                flag = 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}