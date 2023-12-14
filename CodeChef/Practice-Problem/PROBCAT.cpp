// Problem Category
// Problem Code - PROBCAT

// https://www.codechef.com/problems/PROBCAT

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
	    if(x < 100)
	        cout << "easy" << endl;
	    else if(x < 200) 
	        cout << "medium" << endl;
	    else
	        cout << "hard" << endl;
	}
	return 0;
}