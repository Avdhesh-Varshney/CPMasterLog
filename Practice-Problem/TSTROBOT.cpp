// Testing Robot
// Problem Code - TSTROBOT

// https://www.codechef.com/problems/TSTROBOT

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    long long int x;
	    cin >> n >> x;
	    string s;
	    cin >> s;
	    set<long long int> v;
	    for(int i = 0; i < n; i++) {
	        v.insert(x);
	        if(s[i] == 'R') {
	            x++;
	        }
	        else if(s[i] == 'L') {
	            x--;
	        }
	    }
	    v.insert(x);
	    cout << v.size() << endl;
	}
	return 0;
}