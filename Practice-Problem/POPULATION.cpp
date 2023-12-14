// Final Population
// Problem Code - POPULATION

// https://www.codechef.com/problems/POPULATION

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y, z;
	    cin >> x >> y >> z;
	    cout << (x+z)-y << endl;
	}
	return 0;
}