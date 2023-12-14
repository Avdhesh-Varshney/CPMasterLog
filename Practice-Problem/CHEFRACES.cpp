// Chef and Races
// Problem Code - CHEFRACES

// https://www.codechef.com/problems/CHEFRACES

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, x, y, a, b, count = 0;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> x >> y >> a >> b;
	    count = 0;
	    if((x == a) or (x == b))
	        count += 0;
	    else
	        count++;
	        
	    
	    if((y == a) or (y == b))
	        count += 0;
	    else
	        count++;
	        
	   cout << count << endl;
	}
	return 0;
}