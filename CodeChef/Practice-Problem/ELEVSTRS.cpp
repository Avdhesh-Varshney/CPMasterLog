// From Heaven to Earth
// Problem Code - ELEVSTRS

// https://www.codechef.com/problems/ELEVSTRS

// Solution:
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	float n, v1, v2;
	cin >> t;
	while(t--) {
	    cin >> n >> v1 >> v2;
	    float t1 = (n*sqrt(2))/v1;
	    float t2 = (2*n)/v2;
	    if(t1 > t2)
	        cout << "Elevator" << endl;
	    else if(t2 > t1)
	        cout << "Stairs" << endl;
	}
	return 0;
}