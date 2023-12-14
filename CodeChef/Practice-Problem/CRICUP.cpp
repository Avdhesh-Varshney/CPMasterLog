// Cup Finals
// Problem Code - CRICUP

// https://www.codechef.com/problems/CRICUP

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y, d;
	    cin >> x >> y >> d;
	    int u = abs(x-y);
	    if(u <= d)
	        cout << "yes\n";
	    else
	        cout << "no\n";
	}
	return 0;
}