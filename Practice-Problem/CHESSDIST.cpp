// Chessboard Distance
// Problem Code - CHESSDIST

// https://www.codechef.com/problems/CHESSDIST

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x1, y1, x2, y2, l1, l2;
	    cin >> x1 >> y1 >> x2 >> y2;
	    if(x1-x2 >= 0)
	        l1 = x1-x2;
	    else
	        l1 = x2-x1;
	    if(y1-y2 >= 0)
	        l2 = y1-y2;
	    else
	        l2 = y2-y1;
	    int l = (l1 >= l2)?l1:l2;
	    cout << l << endl;
	}
	return 0;
}