// Chef and digits of a number
// Problem Code - LONGSEQ

// https://www.codechef.com/problems/LONGSEQ

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
        int count0 = 0, count1 = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '1')
                count1++;
            else if(s[i] == '0')
                count0++;
        }
        if(count0 == 1 or count1 == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}