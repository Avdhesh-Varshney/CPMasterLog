// Chef on Vacation
// Problem Code - CHEFVACATION

// https://www.codechef.com/problems/CHEFVACATION

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
	    if(z < (x+y))
	        cout << "NO" << endl;
	    else
	        cout << "YES" << endl;
	}
	return 0;
}