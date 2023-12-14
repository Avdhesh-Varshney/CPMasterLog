// AirLine Restrictions
// Problem Code - AIRLINE

// https://www.codechef.com/problems/AIRLINE

// Solution:
#include <iostream>
using namespace std;
bool airline(int a, int b, int c, int d, int e) {
    if((a+b <= d) and (c <= e))
        return true;
    else if((b+c <= d) and (a <= e))
        return true;
    else if((c+a <= d) and (b <= e))
        return true;
    return false;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int a, b, c, d, e;
	    cin >> a >> b >> c >> d >> e;
	    bool result = airline(a, b, c, d, e);
	    if(result)
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}