// Cricket Ranking
// Problem Code - CRICRANK

// https://www.codechef.com/problems/CRICRANK

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int r1, r2, w1, w2, c1, c2;
	    cin >> r1 >> w1 >> c1 >> r2 >> w2 >> c2;
	    if(r1 > r2) {
	        if(w1 > w2) {
	            if(c1 > c2)
	                cout << "A" << endl;
	            else
	                cout << "A" << endl;
	        }
	        else {
	            if(c2 > c1)
	                cout << "B" << endl;
	            else
	                cout << "A" << endl;
	        }
	    }
	    else {
	        if(w2 > w1) {
	            if(c1 > c2)
	                cout << "B" << endl;
	            else
	                cout << "B" << endl;
	        }
	        else {
	            if(c2 > c1)
	                cout << "B" << endl;
	            else
	                cout << "A" << endl;
	        }
	    }
	}
	return 0;
}