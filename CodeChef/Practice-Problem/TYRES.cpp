// Cars and Bikes
// Problem Code - TYRES

// https://www.codechef.com/problems/TYRES

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
	    if(n%4 == 0)
	        cout << "no" << endl;
	    else
	        cout << "yes" << endl;
	}
	
	return 0;
}