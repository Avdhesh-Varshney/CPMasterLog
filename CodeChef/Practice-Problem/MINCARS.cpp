// Minimum Cars required
// Problem Code - MINCARS

// https://www.codechef.com/problems/MINCARS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n;
	    cin >> n;
	    if(n <= 4)
	        cout << "1\n";
	    else if(n%4 == 0)
	        cout << n/4 << endl;
	    else
	        cout << (n/4) + 1 << endl;
	}
	return 0;
}