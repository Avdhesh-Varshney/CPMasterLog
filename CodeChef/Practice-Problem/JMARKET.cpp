// Janmansh at Fruit Market
// Problem Code - JMARKET

// https://www.codechef.com/problems/JMARKET

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t, x, a, b, c, arr[3];
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> x >> a >> b >> c;
	    arr[0] = a;
	    arr[1] = b;
	    arr[2] = c;
	    sort(arr, arr+3);
	    int money = arr[1] + (x-1)*arr[0];
	    cout << money << endl;
	}
	return 0;
}