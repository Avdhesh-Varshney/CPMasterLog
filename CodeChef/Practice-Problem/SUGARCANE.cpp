// Sugarcane Juice Business
// Problem Code - SUGARCANE

// https://www.codechef.com/problems/SUGARCANE

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
	    cout << ((n*50)*30)/100 << endl;
	}
	return 0;
}