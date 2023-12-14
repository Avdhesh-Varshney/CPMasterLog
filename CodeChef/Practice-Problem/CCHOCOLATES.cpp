// Chef and Chocolates
// Problem Code - CCHOCOLATES

// https://www.codechef.com/problems/CCHOCOLATES

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y, z;
	    cin >> x >> y >> z;
	    cout << ((5*x)+(10*y))/z << endl;
	}
	return 0;
}