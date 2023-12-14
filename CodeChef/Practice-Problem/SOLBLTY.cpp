// Solubility
// Problem Code - SOLBLTY

// https://www.codechef.com/problems/SOLBLTY

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
	    cout << (a + (100 - x)*b)*10 << endl;
	}
	return 0;
}