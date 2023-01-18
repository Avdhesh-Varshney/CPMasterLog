// The Block Game
// Problem Code - PALL01

// https://www.codechef.com/problems/PALL01

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t; 
	while(t--) {
	    int n, m = 0, temp;
	    cin >> n;
	    temp = n;
	    while(temp > 0) {
	        m = m*10 +(temp%10);
	        temp /= 10;
	    }
	    if(n == m)
	        cout << "wins" << endl;
	    else
	        cout << "loses" << endl;
	}
	return 0;
}