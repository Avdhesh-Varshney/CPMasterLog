// Roller Coaster
// Problem Code - MINHEIGHT

// https://www.codechef.com/problems/MINHEIGHT

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, h;
	    cin >> x >> h;
	    if(x >= h)
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}