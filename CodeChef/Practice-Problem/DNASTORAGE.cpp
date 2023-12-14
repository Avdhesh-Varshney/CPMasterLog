// DNA Storage
// Problem Code - DNASTORAGE

// https://www.codechef.com/problems/DNASTORAGE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, n;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> n;
	    char s[n];
	    for(int j = 0; j < n; j++)
	        cin >> s[j];
	    for(int k = 0; k < n; k += 2) {
	        if((s[k] == '0') and (s[k+1] == '0'))
	            cout << "A";
	        else if((s[k] == '0') and (s[k+1] == '1'))
	            cout << "T";
	        else if((s[k] == '1') and (s[k+1] == '0'))
	            cout << "C";
	        else if((s[k] == '1') and (s[k+1] == '1'))
	            cout << "G";
	    }
	    cout << endl;
	}
	return 0;
}