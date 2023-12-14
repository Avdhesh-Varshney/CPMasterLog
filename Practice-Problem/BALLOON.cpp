// ICPC in Balloons
// Problem Code - BALLOON

// https://www.codechef.com/problems/BALLOON

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, num = 0, count = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; num != 7; i++) {
            count++;
            if(a[i] == 1 or a[i] == 2 or a[i] == 3 or a[i] == 4 or a[i] == 5 or a[i] == 6 or a[i] == 7)
                num++;
        }
        cout << count << endl;
    }
    return 0;
}