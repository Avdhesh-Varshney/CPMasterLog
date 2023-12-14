// Is it hot or cold
// Problem Code - HOTCOLD

// https://www.codechef.com/problems/HOTCOLD

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, c;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> c;
	    if(c > 20) {
	        cout << "HOT\n";
	    }
	    else {
	        cout << "COLD\n";
	    }
	}
	return 0;
}