// Mileage Matters
// Problem Code - MILEAGE

// https://www.codechef.com/problems/MILEAGE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	float x, y, n, a, b;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> n >> x >> y >> a >> b;
	    float d = (n*y)/b, p = (n*x)/a;
	    if(p > d)
	        cout << "DIESEL\n";
	    else if(p == d)
	        cout << "ANY\n";
	    else
	        cout << "PETROL\n";
	}
	return 0;
}