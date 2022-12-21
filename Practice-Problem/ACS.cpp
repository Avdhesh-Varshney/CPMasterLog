// Count the ACs
// Problem Code - ACS

// https://www.codechef.com/problems/ACS

// Solution:
#include <iostream>
using namespace std;
void accuracy(int num) {
    int k = num/100;
    int n = num%100;
    if(n+k <= 10)
		cout << n+k << endl;
    else
		cout << -1 << endl;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int pp;
	    cin >> pp;
	    accuracy(pp);
	}
	return 0;
}