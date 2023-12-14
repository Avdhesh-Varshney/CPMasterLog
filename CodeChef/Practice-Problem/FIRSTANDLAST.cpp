// First and Last
// Problem Code - FIRSTANDLAST

// https://www.codechef.com/problems/FIRSTANDLAST

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;	    cin >> n;	    int a[n];
	    for(int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
        int large = a[0] + a[n-1];
	    for(int i = 0; i < n-1; i++) {
	        if(a[i] + a[i+1] > large)
	            large = a[i] + a[i+1];
	    }
	   cout << large << endl;
	}
	return 0;
}