// Six Friends
// Problem Code - SIXFRIENDS

// https://www.codechef.com/problems/SIXFRIENDS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y;
	    cin >> x >> y;
	    if(3*x > 2*y)
	        cout << 2*y << endl;
	    else
	        cout << 3*x << endl;
	}
	return 0;
}