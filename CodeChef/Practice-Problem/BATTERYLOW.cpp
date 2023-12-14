// Battery Low
// Problem Code - BATTERYLOW

// https://www.codechef.com/problems/BATTERYLOW

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
	    if(x <= 15)
	        cout << "yes\n";
	    else
	        cout << "no\n";
	}
	return 0;
}