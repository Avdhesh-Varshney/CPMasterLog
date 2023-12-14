// Blackjack
// Problem Code - BLACKJACK

// https://www.codechef.com/problems/BLACKJACK

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
	    if((21 - (a+b)) <= 10)
	        cout << 21 - (a+b) << endl;
	    else
	        cout << "-1\n";
	}
	return 0;
}