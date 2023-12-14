// Counting Pretty Numbers
// Problem Code - NUM239

// https://www.codechef.com/problems/NUM239

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, l, r;
	cin >> t;
	while(t--) {
	    cin >> l >> r;
	    int count = 0;
	    for(int i = l; i <= r; i++) {
	        if((i%10 == 2) or (i%10 == 3) or (i%10 == 9))
	            count++;
	    }
	    cout << count << endl;
	}
	return 0;
}