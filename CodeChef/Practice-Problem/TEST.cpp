// Life, the Universe, and Everything
// Problem Code - TEST

// https://www.codechef.com/problems/TEST

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int n, count = 0;
	cin >> n;
	while((n < 100) and (n >= 0) and (count == 0)) {
	    if(n == 42)
	        count = 1;
	    if(count == 0)
	        cout << n << endl;
	    cin >> n;
	}
	return 0;
}