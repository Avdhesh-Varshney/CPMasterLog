// Priya and AND
// Problem Code - CENS20D

// https://www.codechef.com/problems/CENS20D

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n], sum = 0;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if((a[i]&a[j]) == a[i])
                    sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}