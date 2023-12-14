// The Old Saint And Three Questions
// Problem Code - THREEQ

// https://www.codechef.com/problems/THREEQ

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a1, a2, a3, b1, b2, b3, countS = 0, countH = 0;
	    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
	    if(a1 == 0)
	        countS++;
	    if(a2 == 0)
	        countS++;
	    if(a3 == 0)
	        countS++;
	    if(b1 == 0)
	        countH++;
	    if(b2 == 0)
	        countH++;
	    if(b3 == 0)
	        countH++;
	        
	    if(countH == countS)
	        cout << "Pass" << endl;
	    else
	        cout << "Fail" << endl;
	}
	return 0;
}