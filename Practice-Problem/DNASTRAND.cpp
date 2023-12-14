// Complementry Strand in a DNA
// Problem Code - DNASTRAND

// https://www.codechef.com/problems/DNASTRAND

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
	    char s[n];
	    cin >> s;
	    for(int j = 0; j < n; j++) {
	        if(s[j] == 'A')
	            s[j] = 'T';
	        else if(s[j] == 'T')
	            s[j] = 'A';
	        else if(s[j] == 'C')
	            s[j] = 'G';
	        else if(s[j] == 'G')
	            s[j] = 'C';
	    }
	    cout << s << endl;
	}
	return 0;
}