// Hiring Test
// Problem Code - HIRETEST

// https://www.codechef.com/problems/HIRETEST

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        for(int i = 0; i < n; i++) {
            string s;
            int countf = 0, countp = 0;
            cin >> s;
            for(int j = 0; j < m; j++) {
                if(s[j] == 'F')
                    countf++;
                else if(s[j] == 'P')
                    countp++;
            }
            if((countf >= x) or ((countf == x-1) and (countp >= y)))
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;
    }
    return 0;
}