// Play Piano
// Problem Code - PLAYPIAN

// https://www.codechef.com/problems/PLAYPIAN

// Solution:
#include <iostream>
using namespace std;
int str(string s) {
    for(int i = 0; s[i] != '\0'; i = i+2) {
        if(s[i] == s[i+1]) {
            return 0;
        }
    }
    return 1;
}
int main() {
	// your code goes here
	int t, i = 0;
	string s;
	cin >> t;
	while(t--) {
	    cin >> s;
	    if(str(s))
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}