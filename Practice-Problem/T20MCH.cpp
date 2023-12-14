// Possible Victory
// Problem Code - T20MCH

// https://www.codechef.com/problems/T20MCH

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int r, o, c;
	cin >> r >> o >> c;
	if(((20 - o)*6*6)+c > r)
	    cout << "yes\n";
	else
	    cout << "no\n";
	return 0;
}