// Sasta Shark Tank
// Problem Code - SST

// https://www.codechef.com/problems/SST

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b;
	    cin >> a >> b;
	    if((a*100)/10 > (b*100)/20)
	        cout << "first\n";
	    else if((a*100)/10 == (b*100)/20)
	        cout << "any\n";
	    else
	        cout << "second\n";
	}
	return 0;
}