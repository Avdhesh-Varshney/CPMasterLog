// Wordle
// Problem Code - WORDLE

// https://www.codechef.com/problems/WORDLE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int n;
	char s[5], t[5];
	cin >> n;
	for(int i = 0; i < n; i++) {
	    for(int j = 0; j < 5; j++) {
	        cin >> s[j];
	    }
	    for(int k = 0; k < 5; k++) {
	        cin >> t[k];
	    }
	    for(int l = 0; l < 5; l++) {
	        if(s[l] == t[l])
	            cout << "G";
	        else
	            cout << "B";
	    }
	    cout << endl;
	}
	return 0;
}