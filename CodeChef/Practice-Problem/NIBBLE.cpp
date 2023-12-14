// Good Program
// Problem Code - NIBBLE

// https://www.codechef.com/problems/NIBBLE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n;
	    cin >> n;
	    if(n%4 == 0)
	        cout << "good\n";
	    else
	        cout << "not good\n";
	}
	return 0;
}