// Dark Light
// Problem Code - DARLIG

// https://www.codechef.com/problems/DARLIG

// Solution:
#include <iostream>
using namespace std;
string DarkLight(int n, int k) {
    if(n%4 == 0 and k == 0)
        return "Off";
    else if(n%4 == 0 and k == 1)
        return "On";
    else if(k == 1)
        return "Ambiguous";
    else if(k == 0)
        return "On";
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n, k;
	    cin >> n >> k;
	    string result = DarkLight(n, k);
	    cout << result << endl;
	}
	return 0;
}