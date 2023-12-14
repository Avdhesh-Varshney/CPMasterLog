// Rearranging digits to get a multiple of 5
// Problem Code - DIGARR

// https://www.codechef.com/problems/DIGARR

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int d, count = 0;
	    string s;
	    cin >> d >> s;
	    for(int j = 0; j < d; j++) {
	        if(s[j] == '0' or s[j] == '5')
	            count = 1;
	    }
	    if(count)
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}