// Vishesh and his Popcorn Combo
// Problem Code - POPCORN

// https://www.codechef.com/problems/POPCORN

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int a1, a2, b1, b2, c1, c2;
	    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
	    int s1 = a1 + a2;
	    int s2 = b1 + b2;
	    int s3 = c1 + c2;
	    int l = (s1 > s2) ? s1 : s2;
	    int large = (l > s3) ? l : s3;
	    cout << large << endl;
	}
	return 0;
}