// No Time to Wait
// Problem Code - NOTIME

// https://www.codechef.com/problems/NOTIME

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int n, h, x, count = 0;
	cin >> n >> h >> x;
	int t[n];
	for(int i = 0; i < n; i++) {
	    cin >> t[i];
	}
	for(int i = 0; i < n; i++) {
	    if((x + t[i]) >= h) {
	        count = 1;
	        cout << "yes" << endl;
	        break;
	    }
	}
	if(count == 0)
	    cout << "no" << endl;
	return 0;
}