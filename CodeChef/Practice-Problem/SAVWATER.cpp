// A - Save Water Save Life
// Problem Code - SAVWATER

// https://www.codechef.com/problems/SAVWATER

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int h, x, y, c;
	    cin >> h >> x >> y >> c;
	    if((x+(y/2))*h <= c)
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}