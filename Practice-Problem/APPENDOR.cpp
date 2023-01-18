// Append for OR
// Problem Code - APPENDOR

// https://www.codechef.com/problems/APPENDOR

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, y;
        cin >> n >> y;
        int a[n], z = 0, x = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            z = z|a[i];
        }
        bool flag = false;
        while(x <= y) {
            int temp = z|x;
            if(temp == y) {
                flag = true;
                break;
            }
            x++;
        }
        if(flag)
            cout << x << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}