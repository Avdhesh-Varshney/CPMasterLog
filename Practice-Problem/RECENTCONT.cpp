// Recent contest problems
// Problem Code - RECENTCONT

// https://www.codechef.com/problems/RECENTCONT

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, x = 0, y = 0;
	    cin >> n;
	    string str[n];
	    for(int j = 0; j < n; j++) {
	        cin >> str[j];
	        if(str[j] == "START38")
	            x++;
	        else
	            y++;
	    }
	    cout << x << " " << y << endl;
	}
	return 0;
}