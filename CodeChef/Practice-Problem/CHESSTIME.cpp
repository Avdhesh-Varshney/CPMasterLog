// Chess Time
// Problem Code - CHESSTIME

// https://www.codechef.com/problems/CHESSTIME

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
	    cout << (60*n)/20 << endl;
	}
	return 0;
}