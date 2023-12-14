// Change Row and Column Both
// Problem Code - CHANGEPOS

// https://www.codechef.com/problems/CHANGEPOS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int sx, sy, ex, ey;
	    cin >> sx >> sy >> ex >> ey;
	    if((sx == ex) or (sy == ey))
	        cout << "2\n";
	    else
	        cout << "1\n";
	}
	return 0;
}