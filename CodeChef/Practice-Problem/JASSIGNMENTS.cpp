// Janmansh and Assignments
// Problem Code - JASSIGNMENTS

// https://www.codechef.com/problems/JASSIGNMENTS

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
	    if((x+3) <= 10)
	        cout << "yes\n";
	    else
	        cout << "no\n";
	}
	return 0;
}