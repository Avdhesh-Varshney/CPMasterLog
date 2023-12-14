// Chef and easy problem
// Problem Code - CHEFA

// https://www.codechef.com/problems/CHEFA

// Solution:
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a+n);
        long long int sum = 0;
        if(n&1)
            for(int i = 0; i < n; i = i+2)
                sum += a[i];
        else
            for(int i = 1; i < n; i = i+2)
                sum += a[i];
        cout << sum << endl;
    }
    return 0;
}