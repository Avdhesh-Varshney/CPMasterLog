// Maximise the Tastiness
// Problem Code - MAXTASTE

// https://www.codechef.com/problems/MAXTASTE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, a, b, c, d;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> a >> b >> c >> d;
	    int sum = 0;
	    if(a > b)
	        sum += a;
	    else
	        sum += b;
	    if(c > d)
	        sum += c;
	    else
	        sum += d;
	   cout << sum << endl;
	}
	return 0;
}