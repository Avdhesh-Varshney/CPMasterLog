// Encoding Message
// Problem Code - ENCMSG

// https://www.codechef.com/problems/ENCMSG

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, n;
	string s;
	cin >> t;
	while(t--) {
	    cin >> n >> s;
	    if(n%2 == 0) {
    	    for(int i = 0; s[i] != '\0'; i = i+2) {
    	        char ch = s[i];
    	        s[i] = s[i+1];
    	        s[i+1] = ch;
    	    }
	    }
	    else {
	        char ch = s[n-1];
	        for(int i = 0; i < n-1; i = i+2) {
    	        char ch = s[i];
    	        s[i] = s[i+1];
    	        s[i+1] = ch;
    	    }
    	    s[n-1] = ch;
	    }
	    for(int i = 0; i < n; i++) {
	        char c = s[i];
	        int j = c-97;
	        int k = 97+25-j;
	        char r = (char)(k);
	        cout << r ;
	    }
	    cout << endl;
	}
	return 0;
}