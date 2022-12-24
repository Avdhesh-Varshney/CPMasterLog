// Chef and Chocolates
// Problem Code - CHEFCHOCO

// https://www.codechef.com/problems/CHEFCHOCO

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int c, x, y;
	    cin >> c >> x >> y;
	    cout << (c-x)*y << endl;
	}
	return 0;
}