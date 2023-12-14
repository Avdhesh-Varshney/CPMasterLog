// Too many items
// Problem Code - POLYBAGS

// https://www.codechef.com/problems/POLYBAGS

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
	    if(n%10 == 0)
	        cout << n/10 << endl;
	    else
	        cout << (n/10) + 1 << endl;
	}
	return 0;
}