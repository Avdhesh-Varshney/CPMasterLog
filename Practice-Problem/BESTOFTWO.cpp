// Best of Two
// Problem Code - BESTOFTWO

// https://www.codechef.com/problems/BESTOFTWO

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y;
	    cin >> x >> y;
	    if(x > y)
	        cout << x << endl;
	    else
	        cout << y << endl;
	}
	return 0;
}