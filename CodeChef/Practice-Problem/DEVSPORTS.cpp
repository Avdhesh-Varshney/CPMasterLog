// Devendra and Water Sports
// Problem Code - DEVSPORTS

// https://www.codechef.com/problems/DEVSPORTS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y, a, b, c;
	    cin >> x >> y >> a >> b >> c;
	    if(x - (y+a+b+c) >= 0)
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}