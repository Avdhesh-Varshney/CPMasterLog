// Tanu and Head-Bob
// Problem Code - HEADBOB

// https://www.codechef.com/problems/HEADBOB

// Solution:
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n, county = 0, counti = 0;
	    string s;
	    cin >> n >> s;
	    for(int a = 0; a < n; a++) {
	        if(s[a] == 'Y')
	            county++;
	        else if(s[a] == 'I')
	            counti++;
	    }
	    if(counti > 0 or (counti > 0 and county > 0))
	        cout << "INDIAN" << endl;
	    else if(county > 0 and counti == 0)
	        cout << "NOT INDIAN" << endl;
	    else
	        cout << "NOT SURE" << endl;
	}
	return 0;
}