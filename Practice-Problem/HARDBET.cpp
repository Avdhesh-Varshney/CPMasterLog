// Hardest Problem Bet
// Problem Code - HARDBET

// https://www.codechef.com/problems/HARDBET

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, a, b, c;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> a >> b >> c;
	    int x = (a > b)?b:a;
	    int s = (x > c)?c:x;
	    if(s == a)
	        cout << "draw\n";
	    else if(s == b)
	        cout << "bob" << endl;
	    else
	        cout << "alice" << endl;
	}
	return 0;
}