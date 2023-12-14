// Which Division
// Problem Code - WHICHDIV

// https://www.codechef.com/problems/WHICHDIV

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int r;
	    cin >> r;
	    if(r >= 2000)
	        cout << "1" << endl;
	    else if(r >= 1600)
	        cout << "2" << endl;
	    else
	        cout << "3" << endl;
	}
	return 0;
}