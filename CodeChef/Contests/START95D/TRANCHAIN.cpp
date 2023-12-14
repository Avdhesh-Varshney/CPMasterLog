#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    string blood;
	    int o = 0, a = 0, b = 0, ab = 0;
	    for(int i = 0; i < n; i++) {
	        cin >> blood;
	        if(blood == "O") ++o;
	        else if(blood == "A") ++a;
	        else if(blood == "B") ++b;
	        else ++ab;
	    }
	    if(a > b) cout << o + a + ab << endl;
	    else cout << o + b + ab << endl;
	}
	return 0;
}