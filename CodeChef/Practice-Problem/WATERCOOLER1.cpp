// The Cooler Dilemma 1
// Problem Code - WATERCOOLER1

// https://www.codechef.com/problems/WATERCOOLER1

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y, m;
	    cin >> x >> y >> m;
	    if((x*m) < y)
	        cout << "yes\n";
	    else
	        cout << "no\n";
	}
	return 0;
}