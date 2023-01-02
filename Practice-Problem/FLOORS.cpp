// Too many Floors
// Problem Code - FLOORS

// https://www.codechef.com/problems/FLOORS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, x, y, fx, fy, ans;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> x >> y;
	    if(x%10 == 0)
	        fx = x/10;
	    else
	        fx = (x/10) + 1;
	        

	    if(y%10 == 0)
	        fy = y/10;
	    else
	        fy = (y/10) + 1;
	        
	    ans = (fx > fy)?(fx - fy):(fy - fx);
	    cout << ans << endl;
	}
	return 0;
}