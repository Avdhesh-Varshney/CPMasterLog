// Jenga Night
// Problem Code - JENGA

// https://www.codechef.com/problems/JENGA

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, x;
	    cin >> n >> x;
	    if(n == x or x%n == 0)
	        cout << "yes\n";
	    else
	        cout << "no\n";
	}
	return 0;
}