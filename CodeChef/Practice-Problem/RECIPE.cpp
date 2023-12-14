// Cutting Recipes
// Problem Code - RECIPE

// https://www.codechef.com/problems/RECIPE

// Solution:
#include <bits/stdc++.h>
using namespace std;
void cutting(int arr[], int n) {
    int x = __gcd(arr[0], arr[1]);
    for(int i = 2; i < n; i++) {
        x = __gcd(x, arr[i]);
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i]/x << " ";
    }
}
int main() {
	// your code goes here
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int a[n], small = 1000;
	    for(int i = 0; i < n; i++)
	        cin >> a[i];
	    cutting(a, n);
	    cout << endl;
	}
	return 0;
}