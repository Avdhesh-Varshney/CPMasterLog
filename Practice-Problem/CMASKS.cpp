// Chef and Masks
// Problem Code - CMASKS

// https://www.codechef.com/problems/CMASKS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, x, y;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> x >> y;
	    int xc = x*100;
	    int yc = y*10;
	    if(yc <= xc)
	        cout << "Cloth\n";
	    else
	        cout << "Disposable\n";
	}
	return 0;
}