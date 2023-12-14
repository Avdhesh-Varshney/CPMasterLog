#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int x, y, z;
	    cin >> x >> y >> z;
	    int total = 10*x;
	    if(total <= y)
	        cout << total*z << endl;
	    else
	        cout << y*z << endl;
	}
	return 0;
}
