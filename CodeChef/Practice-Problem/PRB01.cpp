// Primality Test
// Problem Code - PRB01

// https://www.codechef.com/problems/PRB01

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, n, count;
	cin >> t;
	while(t--) {
	    count = 0;
	    cin >> n;
	    for(int i = 2; i <= n; i++) {
	        if(n%i == 0)
	            count++;
	    }
	    if(count == 1)
	        cout << "yes\n";
	    else
	        cout << "no\n";
	}
	return 0;
}