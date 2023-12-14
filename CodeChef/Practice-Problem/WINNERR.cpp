// Determine the Winner
// Problem Code - WINNERR

// https://www.codechef.com/problems/WINNERR

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int pa, pb, qa, qb;
	    cin >> pa >> pb >> qa >> qb;
	    int pl = (pa > pb) ? pa : pb;
	    int ql = (qa > qb) ? qa : qb;
	    if(pl == ql)
	        cout << "TIE" << endl;
	    else if(pl > ql)
	        cout << "Q" << endl;
	    else
	        cout << "P" << endl;
	}
	return 0;
}