// Who is taller!
// Problem Code - TALLER

// https://www.codechef.com/problems/TALLER

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b;
	    cin >> a >> b;
	    if(a > b)
	        cout << "A\n";
	    else
	        cout << "B\n";
	}
	return 0;
}