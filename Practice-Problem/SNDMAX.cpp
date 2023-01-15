// Second Max of Three Num
// Problem Code - SNDMAX

// https://www.codechef.com/problems/SNDMAX

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
    int n, x, y, z;
	cin >> n;
	for(int i = 0; i < n; i++) {
	    cin >> x >> y >> z;
	    if(x > y) {
	        if(y > z)
	            cout << y << endl;
	        else if(x > z)
	            cout << z << endl;
	        else
	            cout << x << endl;
	    }
	    else {
	        if(x > z)
	            cout << x << endl;
	        else if(y > z)
	            cout << z << endl;
	        else
	            cout << y << endl;
	    }
	}
	return 0;
}