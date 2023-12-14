// Malvika is peculiar about color of balloons
// Problem Code - CHN09

// https://www.codechef.com/problems/CHN09

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	string s;
	cin >> t;
	while(t--) {
	    cin >> s;
	    int counta = 0, countb = 0;
	    for(int i = 0; s[i] != '\0'; i++) {
	        if(s[i] == 'a')
	            counta++;
	        else
	            countb++;
	    }
	    if(countb == 0 or counta == 0)
	        cout << "0" << endl;
	    else {
	        int small = (counta > countb)?countb : counta;
	        cout << small << endl;
	    }
	}
	return 0;
}