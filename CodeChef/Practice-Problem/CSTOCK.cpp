// Chef and Stock Prices
// Problem Code - CSTOCK

// https://www.codechef.com/problems/CSTOCK

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    float s, a, b, c;
	    cin >> s >> a >> b >> c;
	    float fp = s + ((s*c)/100);
	    if(fp >= a and fp <= b)
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}