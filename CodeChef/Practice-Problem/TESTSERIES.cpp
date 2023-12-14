// Test Match Series
// Problem Code - TESTSERIES

// https://www.codechef.com/problems/TESTSERIES

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int r[5], count0 = 0, count1 = 0, count2 = 0;
        for(int i = 0; i < 5; i++)
            cin >> r[i];
        for(int i = 0; i < 5; i++) {
            if(r[i] == 0)
                count0++;
            if(r[i] == 1)
                count1++;
            if(r[i] == 2)
                count2++;
        }
        if(count1 > count2)
            cout << "INDIA" << endl;
        else if(count2 > count1)
            cout << "ENGLAND" << endl;
        else
            cout << "DRAW" << endl;
    }
    return 0;
}