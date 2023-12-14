#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    ll a, b, c;
	    cin >> a >> b >> c;
	    ll d1 = abs(a-b), d2 = abs(a-c), d3 = abs(b-c);
	    if(d1%2 == 1 or d2%2 == 1 and d3%2 == 1)
	        cout << -1 << endl;
	    else {
	        ll ans = 0;
	        while(true) {
	            if(a == b && b == c)
	                break;
	            if(a >= b && a >= c) {
	                d1 = a-b;
	                d2 = a-c;
	                ll diff = min(d1, d2);
	                if(diff == 0)
	                    diff = max(d1, d2);
	                ans += diff/2;
	                a -= diff/2;
	                b += diff/2;
	                c += diff/2;
	            }
	            else if(b >= a && b >= c) {
	                d1 = b-a;
	                d2 = b-c;
	                ll diff = min(d1, d2);
	                if(diff == 0)
	                    diff = max(d1, d2);
	                ans += diff/2;
	                a += diff/2;
	                b -= diff/2;
	                c += diff/2;
	            }
	            else if(c >= a && c >= b) {
	                d1 = c-b;
	                d2 = c-a;
	                ll diff = min(d1, d2);
	                if(diff == 0)
	                    diff = max(d1, d2);
	                ans += diff/2;
	                a += diff/2;
	                b += diff/2;
	                c -= diff/2;
	            }
	        }
	        cout << ans << endl;
	    }
	}
	return 0;
}
