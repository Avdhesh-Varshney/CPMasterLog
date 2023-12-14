// Badminton Serves
// Problem Code - BADMINTON

// https://www.codechef.com/problems/BADMINTON

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int p;
	    cin >> p;
	    cout << (p/2)+1 << endl;
	}
	return 0;
}