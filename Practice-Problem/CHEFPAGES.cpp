// Important Pages on CodeChef
// Problem Code - CHEFPAGES

// https://www.codechef.com/problems/CHEFPAGES

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int a, b;
	cin >> a >> b;
	if((a == 1) and (b == 1))
	    cout << "https://discuss.codechef.com" << endl;
	else if(a == 1)
	    cout << "https://www.codechef.com/contests" << endl;
	else
	    cout << "https://www.codechef.com/practice" << endl;
	return 0;
}