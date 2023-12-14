// N Buttons 1 Bulb
// Problem Code - ON_OFF

// https://www.codechef.com/problems/ON_OFF

// Solution:
#include <iostream>
using namespace std;
int on_off(int n, string s, string r) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] != r[i])
            count++;
    }
    if(count%2 == 0)
        return 1;
    else
        return 0;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, result;
	    cin >> n;
	    string s, r;
	    cin >> s >> r;
	    result = on_off(n, s, r);
	    cout << result << endl;
	}
	return 0;
}