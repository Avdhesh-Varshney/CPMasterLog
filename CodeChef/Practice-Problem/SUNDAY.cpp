// Count the Holidays
// Problem Code - SUNDAY

// https://www.codechef.com/problems/SUNDAY

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n;
	    cin >> n;
	    int a[n], count = 8;
	    for(int j = 0; j < n; j++)
	        cin >> a[j];
	    for(int k = 0; k < n; k++) {
	        if((a[k] != 6) and (a[k] != 13) and (a[k] != 20) and (a[k] != 27) and (a[k] != 7) and (a[k] != 14) and (a[k] != 21) and (a[k] != 28)) {
	            count++;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}