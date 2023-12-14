// Minimum Attendance Requirement
// Problem Code - ATTENDU

// https://www.codechef.com/problems/ATTENDU

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n, count = 0;
	    string s;
	    cin >> n >> s;
	    for(int i = 0; i < s.length(); i++) {
	        if(s[i]=='1')
	            count++;
	    }
	    if(120 - n + count >= 90)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}