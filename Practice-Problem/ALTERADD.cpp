// Aternate Additions
// Problem Code - ALTERADD

// https://www.codechef.com/problems/ALTERADD

// Solution:
#include <iostream>
using namespace std;
void addition(int a, int b) {
    int d = abs(a-b);
    if(d%6 == 2)
        cout << "NO" << endl;
    else if(d%6 == 5)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    long int a, b;
	    cin >> a >> b;
	    addition(a,b);
	}
	return 0;
}