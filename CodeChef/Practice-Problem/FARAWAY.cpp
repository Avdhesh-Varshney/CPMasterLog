// Far Away
// Problem Code - FARAWAY

// https://www.codechef.com/problems/FARAWAY

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    long int t;
    cin >> t;
    while(t--) {
        long int n, m;
        cin >> n >> m;
        long int a[n], sum = 0;
        for(long int i = 0; i < n; i++)
            cin >> a[i];
        for(long int i = 0; i < n; i++)
            sum = sum + max(m-a[i], a[i]-1);
        cout << sum << endl;
    }
	return 0;
}