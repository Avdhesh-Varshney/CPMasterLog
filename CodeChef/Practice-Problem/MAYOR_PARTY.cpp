// Peaceful Party
// Problem Code - MAYOR_PARTY

// https://www.codechef.com/problems/MAYOR_PARTY

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
	    if((a+c) > b)
	        cout << a+c << endl;
	    else
	        cout << b << endl;
	}
	return 0;
}