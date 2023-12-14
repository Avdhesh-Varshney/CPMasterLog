// Fill The Grid
// Problem Code - GRIDBL

// https://www.codechef.com/problems/GRIDBL

// Solution:
#include <iostream>
using namespace std;
int grid(int n, int m) {
    int a = n/2;
    int b = m/2;
    int reqd = 4*a*b;
    int result = (n*m) - reqd;
    return result;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, m;
	    cin >> n >> m;
	    int result = grid(n, m);
	    cout << result << endl;
	}
	return 0;
}