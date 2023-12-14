// Chef and Water Bottles
// Problem Code - CHEFBOTTLE

// https://www.codechef.com/problems/CHEFBOTTLE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, x, k;
	    cin >> n >> x >> k;
	    if((k/x) < n)
	        cout << k/x << endl;
	    else
	        cout << n << endl;
	}
	return 0;
}