// Summer Heat
// Problem Code - COCONUT

// https://www.codechef.com/problems/COCONUT

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    cout << (c/a) + (d/b) << endl;
	}
	return 0;
}