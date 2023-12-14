// Relativity
// Problem Code - RELATIVE

// https://www.codechef.com/problems/RELATIVE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int g, c;
	    cin >> g >> c;
	    cout << (c*c)/(2*g) << endl;
	}
	return 0;
}