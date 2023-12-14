// Multiple Choice Exam
// Problem Code - EXAM1

// https://www.codechef.com/problems/EXAM1

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, count = 0;
        cin >> n;
        string s, u;
        cin >> s >> u;
        for(int i = 0; i < n; i++) {
            if(u[i] != 'N' and u[i] == s[i])
                count++;
            else if(u[i] != s[i] and u[i] != 'N')
                i++;
        }
        cout << count << endl;
    }
    return 0;
}