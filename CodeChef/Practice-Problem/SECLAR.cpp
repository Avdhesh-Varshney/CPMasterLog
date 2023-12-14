// Find Second Largest
// Problem Code - SECLAR

// https://www.codechef.com/problems/SECLAR

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	vector<int> v;
	for(int i = 0; i < 3; i++) {
	    int temp;
	    cin >> temp;
	    v.push_back(temp);
	}
	sort(v.begin(), v.end());
	cout << v[1] << endl;
	return 0;
}