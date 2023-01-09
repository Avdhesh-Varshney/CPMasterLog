// Playing with Matches
// Problem Code - MATCHES

// https://www.codechef.com/problems/MATCHES

// Solution:
#include <iostream>
#include <map>
using namespace std;
int main() {
	// your code goes here
	int t, a, b;
	map<int, int> dict;
	dict[0] = 6;
	dict[1] = 2;
	dict[2] = 5;
	dict[3] = 5;
	dict[4] = 4;
	dict[5] = 5;
	dict[6] = 6;
	dict[7] = 3;
	dict[8] = 7;
	dict[9] = 6;
	cin >> t;
	while(t--) {
	    cin >> a >> b;
	    int s = a+b;
	    int count = 0;
	    while(s > 0) {
	        int n = s%10;
	        count += dict[n];
	        s /= 10;
	    }
	    cout << count << endl;
	}
	return 0;
}