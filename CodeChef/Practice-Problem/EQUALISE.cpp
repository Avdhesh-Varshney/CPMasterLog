// Make A and B Equal
// Problem Code - EQUALISE

// https://www.codechef.com/problems/EQUALISE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b;
	    cin >> a >> b;
	    if(a == b)
	        cout << "yes" << endl;
	    else {
	   	    int l = max(a, b);
	        int s = min(a, b);
	        while(l != s and l >= s) {
	            s *= 2;
	        }
	        if(l == s)
	            cout << "yes" << endl;
	        else
	            cout << "no" << endl;
	    }
	}
	return 0;
}