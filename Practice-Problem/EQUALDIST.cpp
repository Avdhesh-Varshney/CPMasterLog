// Equal Distribution
// Problem Code - EQUALDIST

// https://www.codechef.com/problems/EQUALDIST

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, a, b;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> a >> b;
	    if((a+b)%2 == 0)
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}