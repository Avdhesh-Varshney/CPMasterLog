// Minimum number of Flips
// Problem Code - MINFLIPS

// https://www.codechef.com/problems/MINFLIPS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	   int n, s = 0;
	   cin >> n;
	   int a[n];
	   for(int j = 0; j < n; j++)
	       cin >> a[j];
	   for(int k = 0; k < n; k++)
	       s += a[k];
	   if(s%2 == 0) {
	       if(s >= 0)
	            cout << s/2 << endl;
	       else
	            cout << ((-1)*s)/2 << endl;
	   }
	   else
	        cout << "-1" << endl;
	}
	return 0;
}