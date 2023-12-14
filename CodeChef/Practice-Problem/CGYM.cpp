// Chef and Gym
// Problem Code - CGYM

// https://www.codechef.com/problems/CGYM

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
	    int count = 0, d = z-x;
	    if(d >= 0)
	        count++;
	    if(d-y >= 0)
	        count++;
	    cout << count << endl;
	}
	return 0;
}