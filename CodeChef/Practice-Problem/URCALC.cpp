// Program Your Own CALCULATOR
// Problem Code - URCALC

// https://www.codechef.com/problems/URCALC

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int a, b;
	char c;
	cin >> a >> b >> c;
	if(c == '+')
	    cout << a+b << endl;
	else if(c == '-')
	    cout << a-b << endl;
	else if(c == '*')
	    cout << a*b << endl;
	else if(c == '/')
	    cout << fixed << (double)a/b << endl;
	return 0;
}