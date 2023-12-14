// Chef and Spells
// Problem Code - CHFSPL

// https://www.codechef.com/problems/CHFSPL

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    int s = min(a, b);
	    int small = min(s, c);
	    cout << a+b+c - small << endl;
	}
	return 0;
}