// Mario and Transformation
// Problem Code - TRANSFORM

// https://www.codechef.com/problems/TRANSFORM

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x;
	    cin >> x;
	    if(x%3 == 0)
	        cout << "normal\n";
	    else if(x%3 == 1)
	        cout << "huge\n";
	    else
	        cout << "small\n";
	}
	return 0;
}