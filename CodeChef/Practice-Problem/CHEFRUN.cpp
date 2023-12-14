// Secret Recipe
// Problem Code - CHEFRUN

// https://www.codechef.com/problems/CHEFRUN

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    float x1, x2, x3, v1, v2;
	    cin >> x1 >> x2 >> x3 >> v1 >> v2;
	    float d1 = abs(x3 - x1);
	    float d2 = abs(x3 - x2);
	    if(d1 == d2) {
	        if(v1 > v2)
    	        cout << "Chef" << endl;
    	    else if(v1 == v2)
    	        cout << "Draw" << endl;
    	    else
    	        cout << "Kefa" << endl;
	    }
	    else {
	        if((d1/v1) == (d2/v2))
	            cout << "Draw" << endl;
	        else if((d1/v1) > (d2/v2))
	            cout << "Kefa" << endl;
	        else
	            cout << "Chef" << endl;
	    }
	}
	return 0;
}