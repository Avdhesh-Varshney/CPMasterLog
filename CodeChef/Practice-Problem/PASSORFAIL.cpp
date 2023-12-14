// Pass or Fail
// Problem Code - PASSORFAIL

// https://www.codechef.com/problems/PASSORFAIL

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, x, p;
	    cin >> n >> x >> p;
	    if(4*x - n >= p)
	        cout << "pass\n";
	    else
	        cout << "fail\n";
	}
	return 0;
}