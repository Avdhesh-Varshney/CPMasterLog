// Self Defence Training
// Problem Code - SELFDEF

// https://www.codechef.com/problems/SELFDEF

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, count = 0;
	    cin >> n;
	    int a[n];
	    for(int j = 0; j < n; j++)
	        cin >> a[j];
	    for(int j = 0; j < n; j++) {
	        if((a[j] >= 10) and (a[j] <= 60)) {
	            count++;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}