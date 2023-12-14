// Shoe Fit
// Problem Code - SHOEFIT

// https://www.codechef.com/problems/SHOEFIT

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b, c, x = 3, count1 = 0, count0 = 0;
	    cin >> a >> b >> c;
    	if(a == 1)
    	    count1++;
    	else
    	    count0++;
    	if(b == 1)
    	    count1++;
    	else
    	    count0++;
    	if(c == 1)
    	    count1++;
    	else
    	    count0++;
	    if(count1 == 0 or count0 == 0)
	        cout << "0" << endl;
	    else
	        cout << "1" << endl;
	}
	return 0;
}