// Chef and Interactive Contests
// Problem Code - CHFINTRO

// https://www.codechef.com/problems/CHFINTRO

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int n, R;
	cin >> n >> R;
	int r[n];
	for(int i = 0; i < n; i++) {
	    cin >> r[i];
	}
	for(int j = 0; j < n; j++) {
	    if(r[j] >= R)
	        cout << "Good boi" << endl;
	    else 
	        cout << "Bad boi" << endl;
	}
	return 0;
}