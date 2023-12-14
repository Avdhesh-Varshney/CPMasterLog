// Sale Season
// Problem Code - SALESEASON

// https://www.codechef.com/problems/SALESEASON

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x;
	    cin >> x;
	    if(x <= 100)
	        cout << x << endl;
	    else if(x <= 1000)
	        cout << x-25 << endl;
	    else if(x <= 5000)
	        cout << x-100 << endl;
	    else
	        cout << x-500 << endl;
	}
	return 0;
}