// Joining Date
// Problem Code - JOINING

// https://www.codechef.com/problems/JOINING

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, k;
	    cin >> n >> k;
	    int b = (k%5 == 0)?(k/5):((k/5)+1);
	    int a = (n%5 == 0)?(n/5):((n/5)+1);
	    if(n == k)
	        cout << "0" << endl;
	    else if(a == b)
	        cout << "0" << endl;
	    else 
	        cout << a-b << endl;
	}
	return 0;
}