// Utkarsh and Placement tests
// Problem Code - UTKPLC

// https://www.codechef.com/problems/UTKPLC

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    char first, second, third, x, y;
	    cin >> first >> second >> third >> x >> y;
	    if((first == x) or (first == y))
	        cout << first << endl;
	    else if((second == x) or (second == y))
	        cout << second << endl;
	    else
	        cout << third << endl;
	}
	return 0;
}