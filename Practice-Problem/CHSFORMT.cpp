// Chess Format
// Problem Code - CHSFORMT

// https://www.codechef.com/problems/CHSFORMT

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b;
	    cin >> a >> b;
	    if(a+b < 3)
	        cout << "1" << endl;
	    else if(a+b <= 10)
	        cout << "2" << endl;
	    else if(a+b <= 60)
	        cout << "3" << endl;
	    else
	        cout << "4" << endl;
	}
	return 0;
}