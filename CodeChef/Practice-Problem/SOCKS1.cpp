// Valid Pair
// Problem Code - SOCKS1

// https://www.codechef.com/problems/SOCKS1

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int a, b, c;
	cin >> a >> b >> c;
	if((a == b) or (a == c))
	    cout << "yes" << endl;
	else if((b == a) or (b == c))
	    cout << "yes" << endl;
	else if((c == a) or (c == b))
	    cout << "yes" << endl;
	else
	    cout << "no" << endl;
	return 0;
}