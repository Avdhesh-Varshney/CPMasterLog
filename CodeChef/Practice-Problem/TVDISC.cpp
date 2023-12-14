// TV Discount
// Problem Code - TVDISC

// https://www.codechef.com/problems/TVDISC

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    if((a-c) > (b-d))
	        cout << "Second" << endl;
	    else if((a-c) == (b-d))
	        cout << "Any" << endl;
	    else
	        cout << "First" << endl;
	}
	return 0;
}