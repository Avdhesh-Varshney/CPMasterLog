// Chef and Fruits
// Problem Code - FRUITS

// https://www.codechef.com/problems/FRUITS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n, m, k;
	    cin >> n >> m >> k;
	    int large = (n > m)? n : m;
	    int small = (n > m)? m : n;
	    while(large != small and k > 0) {
	        small++;
	        k--;
	    }
	    cout << large - small << endl;
	}
	return 0;
}