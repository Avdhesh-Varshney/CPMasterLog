#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int x, y, z;
	    cin >> x >> y >>z;
	    int m = min(y, z);
	    y -= m;
	    z -= m;
	    if(x > y && x > z)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
