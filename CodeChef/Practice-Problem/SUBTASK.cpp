// A Subtask Problem
// Problem Code - SUBTASK

// https://www.codechef.com/problems/SUBTASK

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int a[n], score = 0, count = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 1)
                count++;
        }
        if(count == n)
            cout << "100" << endl;
        else {
            count = 0;
            for(int i = 0; i < m; i++) {
                if(a[i] == 1)
                    count++;
            }
            if(count == m)
                cout << k << endl;
            else
                cout << "0" << endl;
        }
        for(int i = 0; i < n; i++) {
            if(a[i] == 1)
                count++;
        }
    }
    return 0;
}