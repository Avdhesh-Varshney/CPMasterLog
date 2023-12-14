// Bucket and Water Flow 
// Problem Code - WATERFLOW

// https://www.codechef.com/problems/WATERFLOW

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int w, x, y, z;
	    cin >> w >> x >> y >> z;
	    if(x == (w+(y*z)))
	        cout << "filled\n";
	    else if(x > (w+(y*z)))
	        cout << "unfilled\n";
	    else
	        cout << "overflow\n";
	}
	return 0;
}