// Helping Chef
// Problem Code - FLOW008

// https://www.codechef.com/problems/FLOW008

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    if(n < 10)
	        cout << "Thanks for helping Chef!" << endl;
	    else
	        cout << "-1\n";
	}
	return 0;
}