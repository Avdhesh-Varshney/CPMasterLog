// Bidding
// Problem Code - AUCTION

// https://www.codechef.com/problems/AUCTION

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, a, b, c;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> a >> b >> c;
	    if(a > b){
	        if(a > c)
	            cout << "Alice\n";
	        else
	            cout << "Charlie\n";
	    }
	    else{
	        if(b > c)
	            cout << "Bob\n";
	        else
	            cout << "Charlie\n";
	    }
	}
	return 0;
}