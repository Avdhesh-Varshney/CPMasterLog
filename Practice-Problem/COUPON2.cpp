// Chef and Coupon
// Problem Code - COUPON2

// https://www.codechef.com/problems/COUPON2

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int d, c, a[3], b[3];
        cin >> d >> c;
        cin >> a[0] >> a[1] >> a[2];
        cin >> b[0] >> b[1] >> b[2];
        int s1 = a[0]+a[1]+a[2], s2 = b[0]+b[1]+b[2], s = s1+s2;
        int twoc = s1 + s2 + d + d;
	    int twc = twoc + c;
	    if(s1 >= 150)
	        twc = twc - d;
	    if(s2 >= 150)
	        twc = twc - d;
	    if(twc < twoc)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
    }
    return 0;
}