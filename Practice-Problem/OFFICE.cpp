// Chef in his Office
// Problem Code - OFFICE

// https://www.codechef.com/problems/OFFICE

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
	    cout << (x*4) + y << endl;
	}
	return 0;
}