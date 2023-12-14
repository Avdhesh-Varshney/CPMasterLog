// Apples and Oranges
// Problem Code - APPLORNG

// https://www.codechef.com/problems/APPLORNG

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int x, a, b;
	cin >> x >> a >> b;
	if(x >= (a+b))
	    cout << "YES\n";
	else
	    cout << "NO\n";
	return 0;
}