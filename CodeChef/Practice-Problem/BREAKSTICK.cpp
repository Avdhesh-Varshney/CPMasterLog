// Break the Stick
// Problem Code - BREAKSTICK

// https://www.codechef.com/problems/BREAKSTICK

// Solution:
#include <iostream>
using namespace std;
int stick(int n, int x) {
    if(x%2 == 1)
        return 1;
    else if(x%2 == 0 and n%2 == 0)
        return 1;
    else
        return 0;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n, x;
	    cin >> n >> x;
	    int count = stick(n, x);
	    if(count)
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}