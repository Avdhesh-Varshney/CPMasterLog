// Highest Divisor
// Problem Code - HDIVISR

// https://www.codechef.com/problems/HDIVISR

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int n, l = 1;
	cin >> n;
	for(int i = 1; i <= 10; i++) {
	    if(n%i == 0)
	        l = i;
	}
	cout << l << endl;
	return 0;
}