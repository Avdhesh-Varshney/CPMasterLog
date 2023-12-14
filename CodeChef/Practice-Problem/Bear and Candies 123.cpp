// Bear and Candies 123
// Problem Code - CANDY123

// https://www.codechef.com/problems/CANDY123

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int a, b, counta = 0, i = 1, countb = 0, count = 0;
	    cin >> a >> b;
	    while(a >= 0 and b >= 0) {
	        if(i%2 == 0) {
	            b = b - i;
	            countb++;
	        }
	        else {
	            a = a - i;
	            counta++;
	        }
	        i++;
	    }
	    if(counta > countb)
	        cout << "Bob" << endl;
	    else
	        cout << "Limak" << endl;
	}
	return 0;
}