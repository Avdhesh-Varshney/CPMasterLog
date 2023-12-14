// Smallest Number of Notes
// Problem Code - FLOW005

// https://www.codechef.com/problems/FLOW005

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int count = n/100;
	    n = n%100;
	    while(n > 0) {
	        if(n/50 > 0) {
	            count += n/50;
	            n = n%50;
	        }
	        else if(n/10 > 0) {
	            count += n/10;
	            n = n%10;
	        }
	        else if(n/5 > 0) {
	            count += n/5;
	            n = n%5;
	        }
	        else if(n/2 > 0) {
	            count += n/2;
	            n = n%2;
	        }
	        else {
	            count = count + n;
	            n = 0;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}