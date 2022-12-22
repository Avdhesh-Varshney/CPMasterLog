// Bomb the base
// Problem Code - BOMBTHEBASE

// https://www.codechef.com/problems/BOMBTHEBASE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, x, index = -1;
	    cin >> n >> x;
	    int a[n];
	    for(int j = 0; j < n; j++)
	        cin >> a[j];
	    for(int k = 0; k < n; k++) {
	        if(a[k] < x)
	            index = k;
	    }
	    if(index == -1)
	        cout << "0" << endl;
	    else
	        cout << index+1 << endl;
	}
	return 0;
}