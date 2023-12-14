// The Mango Truck
// Problem Code - MANGOES

// https://www.codechef.com/problems/MANGOES

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
	    cout << (z-y)/x << endl;
	}
	return 0;
}