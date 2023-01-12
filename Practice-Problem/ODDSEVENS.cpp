// Odds and Evens
// Problem Code - ODDSEVENS

// https://www.codechef.com/problems/ODDSEVENS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b;
	    cin >> a >> b;
	    if((a+b)%2 == 0)
	        cout << "Bob" << endl;
	    else
	        cout << "Alice" << endl;
	}
	return 0;
}