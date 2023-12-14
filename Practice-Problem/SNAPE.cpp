// Snape and Ladder
// Problem Code - SNAPE

// https://www.codechef.com/problems/SNAPE

// Solution:
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int b, ls;
	    cin >> b >> ls;
	    float r1 = sqrt((ls*ls) - (b*b));
	    float r2 = sqrt((ls*ls) + (b*b));
	    cout << r1 << " " << r2 << endl;
	}
	return 0;
}