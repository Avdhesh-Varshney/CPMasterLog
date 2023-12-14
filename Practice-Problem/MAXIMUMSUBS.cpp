// Maximum Submissions
// Problem Code - MAXIMUMSUBS

// https://www.codechef.com/problems/MAXIMUMSUBS

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
	    cout << (x*60)/30 << endl;
	}
	return 0;
}