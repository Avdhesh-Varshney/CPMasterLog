// Get Lowest Free
// Problem Code - SALE

// https://www.codechef.com/problems/SALE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    int x = (a >= b)?b:a;
	    int s = (x >= c)?c:x;
	    cout << a+b+c-s << endl;
	}
	return 0;
}