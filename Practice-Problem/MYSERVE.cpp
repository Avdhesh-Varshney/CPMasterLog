// It is My Serve
// Problem Code - MYSERVE

// https://www.codechef.com/problems/MYSERVE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int p, q;
	    cin >> p >> q;
	    int sum = p+q;
	    if(sum%4 == 0 or sum%4 == 1)
	        cout << "Alice" << endl;
	    else
	        cout << "Bob" << endl;
	}
	return 0;
}