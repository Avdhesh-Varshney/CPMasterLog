// Divisible by 3
// Problem Code - MODULO3

// https://www.codechef.com/problems/MODULO3

// Solution:
#include <iostream>
using namespace std;
int main() {
	int t, a, b;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int counta = 0, countb = 0;
	    cin >> a >> b;
	    if(a%3 == 0 or b%3 == 0)
	        cout << "0" << endl;
	    else {
	        int l= max(a, b);
	        int s = min(a,b);
	        while(l >= 0 and l%3 != 0) {
	            counta++;
	            l = abs(l-s);
	        }
	        cout << counta << endl;
	    }
	}
	return 0;
}