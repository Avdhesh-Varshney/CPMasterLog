// Playlist
// Problem Code - SONGS

// https://www.codechef.com/problems/SONGS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, x;
	    cin >> n >> x;
	    cout << n/(3*x) << endl;
	}
	return 0;
}