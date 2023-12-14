// Slow Solution
// Problem Code - SLOWSOLN

// https://www.codechef.com/problems/SLOWSOLN

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int maxt, maxn, sunn, sum = 0;
	    cin >> maxt >> maxn >> sunn;
	    while(sunn > 0 and maxt > 0) {
	        maxt--;
	        int p = (sunn > maxn)?maxn:sunn;
	        sum += (p*p);
	        sunn -= maxn;
	    }
	    cout << sum << endl;
	}
	return 0;
}