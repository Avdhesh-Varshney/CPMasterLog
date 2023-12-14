// Total Expenses
// Problem Code - FLOW009

// https://www.codechef.com/problems/FLOW009

// Solution:
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    double quantity, price;
	    cin >> quantity >> price;
	   cout << setprecision(6) << fixed << ((quantity > 1000)?((price - (0.1*price))*quantity): price*quantity) << endl;
	}
	return 0;
}