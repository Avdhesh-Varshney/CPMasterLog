// Qualify the round
// Problem Code - QUALIFY

// https://www.codechef.com/problems/QUALIFY

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, a, b;
	    cin >> x >> a >> b;
	    if(x <= (a+ 2*b))
	        cout << "qualify\n";
	    else
	        cout << "notqualify\n";
	}
	return 0;
}