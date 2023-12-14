// High Accuracy
// Problem Code - ACCURACY

// https://www.codechef.com/problems/ACCURACY

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x;
	    cin >> x;
	    int k = (x/3);
	    if(x%3 == 0)
	        cout << "0" << endl;
	    else
    	    cout << 3*(k+1) - x << endl;
	}
	return 0;
}