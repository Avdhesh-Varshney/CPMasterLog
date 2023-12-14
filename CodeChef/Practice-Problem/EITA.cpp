// Maximum Production
// Problem Code - EITA

// https://www.codechef.com/problems/EITA

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int d, x, y, z;
	    cin >> d >> x >> y >> z;
	    int a = y*d + (7-d)*z;
	    if(7*x >= a)
	        cout << 7*x << endl;
	    else
	        cout << a << endl;
	}
	return 0;
}