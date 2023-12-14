// Easy Pronunciation
// Problem Code - EZSPEAK

// https://www.codechef.com/problems/EZSPEAK

// Solution:
#include <iostream>
using namespace std;
int pronunciation(string s, int n) {
    if (n >= 4) {
        for(int i = 0; i <= n-4; i++) {
            int count = 0;
            if(s[i] != 'a' and s[i] != 'e' and s[i] != 'i' and s[i] != 'o' and s[i] != 'u') {
                if(s[i+1] != 'a' and s[i+1] != 'e' and s[i+1] != 'i' and s[i+1] != 'o' and s[i+1] != 'u') {
                    if(s[i+2] != 'a' and s[i+2] != 'e' and s[i+2] != 'i' and s[i+2] != 'o' and s[i+2] != 'u') {
                        if(s[i+3] != 'a' and s[i+3] != 'e' and s[i+3] != 'i' and s[i+3] != 'o' and s[i+3] != 'u')
                            return 1;
                    }
                }
            }
        }
    }
    return 0;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int result = pronunciation(s, n);
	    if(result == 0)
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}