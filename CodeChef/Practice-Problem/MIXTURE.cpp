// Which Mixture
// Problem Code - MIXTURE

// https://www.codechef.com/problems/MIXTURE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b;
	    cin >> a >> b;
	    if((a > 0) and (b > 0))
	        cout << "Solution" << endl;
	    else if(a == 0)
	        cout << "Liquid" << endl;
	    else
	        cout << "Solid" << endl;
	}
	return 0;
}