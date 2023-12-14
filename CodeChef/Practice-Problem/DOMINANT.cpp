// Dominant Army
// Problem Code - DOMINANT

// https://www.codechef.com/problems/DOMINANT

// Solution:
#include <iostream>
using namespace std;
int dominant(int a, int b, int c) {
    if(c > a+b)
        return 1;
    else if(b > a+c)
        return 1;
    else if(a > b+c)
        return 1;
    return 0;
}
int main() {
	// your code goes here
	int t, a, b, c, large;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> a >> b >> c;
	    int result = dominant(a, b, c);
	    if(result == 1)
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}