// Olympics Ranking
// Problem Code - OLYRANK

// https://www.codechef.com/problems/OLYRANK

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int g1, g2, s1, s2, b1, b2;
	    cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
	    if((g1 + s1 + b1) > (g2 + s2 + b2))
	        cout << "1" << endl;
	    else
	        cout << "2" << endl;
	}
	return 0;
}