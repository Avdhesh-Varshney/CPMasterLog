// Zero Ones Equal One Zeros
// Problem Code - ZOOZ

// https://www.codechef.com/problems/ZOOZ

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
	    int a[n];
	    if(n%2 == 0) {
	        a[0] = 0;
	        for(int i = 1; i < n-1; i++) {
	            a[i] = 1;
	        }
	        a[n-1] = 0;
	    }
	    else {
    	    for(int i = n-1; i >= 0; i--) {
    	        if(i%2 == 0)
    	            a[i] = 0;
    	        else
    	            a[i] = 1;
    	    }
	    }
	    for(int j = 0; j < n; j++)
	        cout << a[j];
	    cout << endl;
	}
	return 0;
}