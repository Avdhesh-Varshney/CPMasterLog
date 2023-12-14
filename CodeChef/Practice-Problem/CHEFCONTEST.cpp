// Chef and Contest
// Problem Code - CHEFCONTEST

// https://www.codechef.com/problems/CHEFCONTEST

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y, p, q;
	    cin >> x >> y >> p >> q;
	    if((x + (p*10)) > (y + (q*10)))
	        cout << "Chefina" << endl;
	    else if((x + (p*10)) == (y + (q*10)))
	        cout << "Draw" << endl;
	    else
	        cout << "Chef" << endl;
	}
	return 0;
}