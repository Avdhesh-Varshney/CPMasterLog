// Drunk Alcoholic
// Problem Code - DRUNKALK

// https://www.codechef.com/problems/DRUNKALK

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int k, t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> k;
	    int count = 0, j = 1;
	    while(j <= k){
	        if(j%2 == 0) {
	            count--;
	            j++;
	        }
	        else {
	            count += 3;
	            j++;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}