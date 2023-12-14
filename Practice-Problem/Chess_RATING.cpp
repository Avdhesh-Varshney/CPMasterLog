// Chess Ratings
// Problem Code - C_RATINGS

// https://www.codechef.com/problems/C_RATINGS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y, n = 0;
	    cin >> x >> y;
	    while((x + 8*n) < y)
	        n++;
	    cout << n << endl;
	}
	return 0;
}