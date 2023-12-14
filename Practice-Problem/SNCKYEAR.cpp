// Chef and SnackDown
// Problem Code - SNCKYEAR

// https://www.codechef.com/problems/SNCKYEAR

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
	    if((n == 2010) or (n == 2015) or (n == 2016) or (n == 2017) or (n == 2019))
	        cout << "HOSTED" << endl;
	    else
	        cout << "NOT HOSTED" << endl;
	}
	return 0;
}