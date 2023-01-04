// Chef and NextGen
// Problem Code - HELIUM3

// https://www.codechef.com/problems/HELIUM3

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b, x, y;
	    cin >> a >> b >> x >> y;
	    if((a*b) <= (x*y))
	        cout << "yes\n";
	    else
	        cout << "no\n";
	}
	return 0;
}