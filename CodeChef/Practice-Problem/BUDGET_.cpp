// Monthly Budget
// Problem Code - BUDGET_

// https://www.codechef.com/problems/BUDGET_

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
	    if(x >= (30*y))
	        cout << "yes\n";
	    else
	        cout << "no\n";
	}
	return 0;
}