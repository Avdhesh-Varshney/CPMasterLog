// WA Test Cases
// Problem Code - WATESTCASES

// https://www.codechef.com/problems/WATESTCASES

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int s[n];
	    for(int i = 0; i < n; i++)
	        cin >> s[i];
	    string v;
	    cin >> v;
	    int small = 101;
	    for(int i = 0; i < n; i++) {
	        if(v[i] == '0') {
	            if(small > s[i])
	                small = s[i];
	        }
	    }
	    cout << small << endl;
	}
	return 0;
}