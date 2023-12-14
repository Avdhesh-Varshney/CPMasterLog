// Can You Eat It
// Problem Code - COMPCAND

// https://www.codechef.com/problems/COMPCAND

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, k;
	    cin >> n >> k;
	    if(n == 0)
	        cout << "0" << endl;
	    else {
	        if(n%k == 0)
	            cout << n/k << endl;
	        else
	            cout << "-1" << endl;
	    }
	}
	return 0;
}