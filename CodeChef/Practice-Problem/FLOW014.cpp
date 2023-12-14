// Grade The Steel
// Problem Code - FLOW014

// https://www.codechef.com/problems/FLOW014

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int hardness, carbon, tensile;
	    cin >> hardness >> carbon >> tensile;
	    if((hardness > 50) and (carbon < 0.7) and (tensile > 5600))
	        cout << "10" << endl;
	    else if((hardness > 50) and (carbon < 0.7))
	        cout << "9" << endl;
	    else if((carbon < 0.7) and (tensile > 5600))
	        cout << "8" << endl;
	    else if((hardness > 50) and (tensile > 5600))
	        cout << "7" << endl;
	    else if((hardness > 50) or (carbon < 0.7) or (tensile > 5600))
	        cout << "6" << endl;
	    else
	        cout << "5" << endl;
	}
	return 0;
}