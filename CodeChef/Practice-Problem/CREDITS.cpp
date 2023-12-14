// Complete The Credits
// Problem Code - CREDITS

// https://www.codechef.com/problems/CREDITS

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
	    if(n > 65)
	        cout << "overload" << endl;
	    else if(n < 35)
	        cout << "underload" << endl;
	    else
	        cout << "normal" << endl;
	}
	return 0;
}