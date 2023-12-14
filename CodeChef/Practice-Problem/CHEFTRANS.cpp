// Chef and Vacation Transportation
// Problem Code - CHEFTRANS

// https://www.codechef.com/problems/CHEFTRANS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y, z;
	    cin >> x >> y >> z;
	    if(x+y > z)
	        cout << "train" << endl;
	    else if(x+y == z)
	        cout << "equal" << endl;
	    else
	        cout << "planebus" << endl;
	}
	return 0;
}