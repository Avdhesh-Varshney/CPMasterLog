// Volume Control
// Problem Code - VOLCONTROL

// https://www.codechef.com/problems/VOLCONTROL

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n1, n2;
	    cin >> n1 >> n2;
	    if(n1 > n2) {
	        cout << n1-n2 << endl;
	    }
	    else {
	        cout << n2-n1 << endl;
	    }
	}
	return 0;
}