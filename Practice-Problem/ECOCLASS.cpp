// Economics Class
// Problem Code - ECOCLASS

// https://www.codechef.com/problems/ECOCLASS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, count = 0;
	    cin >> n;
	    int s[n], d[n];
	    for(int j = 0; j < n; j++)
	        cin >> s[j];
	    for(int j = 0; j < n; j++)
	        cin >> d[j];
	    for(int j = 0; j < n; j++) {
	        if(s[j] == d[j])
	            count++;
	    }
	    cout << count << endl;
	}
	return 0;
}