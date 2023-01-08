// How Much Scholarship
// Problem Code - ZCOSCH

// https://www.codechef.com/problems/ZCOSCH

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int r;
	cin >> r;
	if(r <= 50)
	    cout << "100" << endl;
	else if(r <= 100)
	    cout << "50" << endl;
	else
	    cout << "0" << endl;
	return 0;
}