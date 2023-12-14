// Chef and his Apps
// Problem Code - CHEFAPPS

// https://www.codechef.com/problems/CHEFAPPS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int s, x, y, z;
	    cin >> s >> x >> y >> z;
	    int sum = x+y+z;
	    if(s >= sum)
	        cout << "0" << endl;
	    else if(z <= s - min(x, y))
	        cout << "1" << endl;
	    else if(z > s - min(x, y))
	        cout << "2" << endl;
	}
	return 0;
}