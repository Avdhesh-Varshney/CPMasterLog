// Two vs Ten
// Problem Code - TWOVSTEN

// https://www.codechef.com/problems/TWOVSTEN

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, x;
	cin >> t;
	while(t--) {
	    cin >> x;
	    if(x%10 == 0)
	        cout << "0" << endl;
	    else if(x%5 == 0) {
	        int count = 0;
	        while(x%10 != 0) {
	            count++;
	            x = x*2;
	        }
	        cout << count << endl;
	    }
	    else
	        cout << "-1" << endl;
	}
	return 0;
}