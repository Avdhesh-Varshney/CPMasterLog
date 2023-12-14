// Chef and Bird farm
// Problem Code - BIRDFARM

// https://www.codechef.com/problems/BIRDFARM

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
	    if(z%x == 0 and z%y == 0)
	        cout << "ANY" << endl;
	    else if(z%x == 0)
	        cout << "CHICKEN" << endl;
	    else if(z%y == 0)
	        cout << "DUCK" << endl;
	    else
	        cout << "NONE" << endl;
	}
	return 0;
}