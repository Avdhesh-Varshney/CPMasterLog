// Chef and Candies
// Problem Code - CHEFCAND

// https://www.codechef.com/problems/CHEFCAND

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, x;
	    cin >> n >> x;
	    if(n < x)
	        cout << "0\n";
	    else{
	        int count = 0;
	        while(x + 4*count < n)
	            count++;
	        cout << count << endl;
	    }
	}
	return 0;
}