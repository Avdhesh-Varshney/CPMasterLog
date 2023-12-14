// Find The Direction
// Problem Code - FACEDIR

// https://www.codechef.com/problems/FACEDIR

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, x;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> x;
	    if(x%4 == 0)
	        cout << "North" << endl;
	    else if(x%4 == 1)
	        cout << "East" << endl;
	    else if(x%4 == 2)
	        cout << "South" << endl;
	    else if(x%4 == 3)
	        cout << "West" << endl;
	}
	return 0;
}