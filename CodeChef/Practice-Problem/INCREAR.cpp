// Equal Integers
// Problem Code - INCREAR

// https://www.codechef.com/problems/INCREAR

// Solution:
#include <iostream>
using namespace std;
int equal(int x, int y) {
    if(x == y)
        return 0;
    else if(y > x)
        return y-x;
    else {
        int d = x-y;
        if(d%2 == 0)
            return d/2;
        else {
            return (((d+1)/2) + 1);
        }
    }
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y, count1 = 0, count2 = 0;
	    cin >> x >> y;
	    int result = equal(x, y);
	    cout << result << endl;
	}
	return 0;
}