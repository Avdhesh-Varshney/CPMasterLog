// Food Chain
// Problem Code - FODCHAIN

// https://www.codechef.com/problems/FODCHAIN

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int e, k, count = 0;
	    cin >> e >> k;
	    while(e > 0){
	        count++;
	        e /= k;
	    }
	    cout << count << endl;
	}
	return 0;
}