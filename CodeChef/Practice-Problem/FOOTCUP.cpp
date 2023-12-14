// Football Cup
// Problem Code - FOOTCUP

// https://www.codechef.com/problems/FOOTCUP

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y;
	    cin >> x >> y;
	    if((x,y > 0) && (x == y))
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}