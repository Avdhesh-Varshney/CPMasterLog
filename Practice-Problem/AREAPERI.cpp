// Area OR Perimeter
// Problem Code - AREAPERI

// https://www.codechef.com/problems/AREAPERI

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	long int l, b;
	cin >> l >> b;
	long int a = l*b;
	long int p = 2*(l+b);
	if(a == p)
	    cout << "Eq\n" << a << endl;
	else if(a > p)
	    cout << "Area\n" << a << endl;
	else
	    cout << "Peri\n" << p << endl;
	return 0;
}