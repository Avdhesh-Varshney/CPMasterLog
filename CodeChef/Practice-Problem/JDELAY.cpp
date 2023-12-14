// Judging Delay
// Problem Code - JDELAY

// https://www.codechef.com/problems/JDELAY

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, n, a, b;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int count = 0;
	    for(int i = 0; i < n; i++) {
	        cin >> a >> b;
	        if(abs(a-b) > 5)
	            count++;
	    }
	    cout << count << endl;
	}
	return 0;
}