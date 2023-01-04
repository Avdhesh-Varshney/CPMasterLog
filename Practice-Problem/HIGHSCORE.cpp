// Score High
// Problem Code - HIGHSCORE

// https://www.codechef.com/problems/HIGHSCORE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, na, nb, nc, nd;
	    cin >> n >> na >> nb >> nc >> nd;
	    int l1 = (na >= nb)?na:nb;
	    int l2 = (nc >= nd)?nc:nd;
	    int l = (l1 >= l2)?l1:l2;
	    cout << l << endl;
	}
	return 0;
}