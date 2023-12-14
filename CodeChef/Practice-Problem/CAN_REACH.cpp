// Can_Reach
// Problem Code - CAN_REACH

// https://www.codechef.com/problems/CAN_REACH

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int x, y, k;
	    cin >> x >> y >> k;
	    if(x%k == 0 and y%k == 0)
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}