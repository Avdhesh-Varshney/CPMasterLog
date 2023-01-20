// Weight Balance
// Problem Code - WEIGHTBL

// https://www.codechef.com/problems/WEIGHTBL

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int w1, w2, x1, x2, m;
	    cin >> w1 >> w2 >> x1 >> x2 >> m;
	    int d = w2 - w1;
	    int p1 = x1*m;
	    int p2 = x2*m;
	    if(d >= p1 and d <= p2)
	        cout << "1" << endl;
	    else
	        cout << "0" << endl;
	}
	return 0;
}