// The Three Topics
// Problem Code - THREETOPICS

// https://www.codechef.com/problems/THREETOPICS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int a, b, c, x;
	cin >> a >> b >> c >> x;
	if((a == x) or (b == x) or (c == x))
	    cout << "yes\n";
	else
	    cout << "no\n";
	return 0;
}