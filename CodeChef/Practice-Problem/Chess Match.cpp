// Chess Match
// Problem Code - BLITZ3_2

// https://www.codechef.com/problems/BLITZ3_2

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n, a, b;
	    cin >> n >> a >> b;
	    cout << (2*(180 + n)) - (a+b) << endl;
	}
	return 0;
}