// Mario and Bullet
// Problem Code - BULLET

// https://www.codechef.com/problems/BULLET

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
	    if((z-(y/x)) > 0)
	        cout << z-(y/x) << endl;
	    else
	        cout << "0\n";
	}
	return 0;
}