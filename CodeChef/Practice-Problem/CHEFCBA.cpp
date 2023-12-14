// Chef and Proportion
// Problem Code - CHEFCBA

// https://www.codechef.com/problems/CHEFCBA

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	vector<float> v;
	for(int i = 0; i < 4; i++) {
	    int temp;
	    cin >> temp;
	    v.push_back(temp);
	}
	sort(v.begin(), v.end());
	float x = v[0];
	float y = v[1];
	float z = v[2];
	float w = v[3];
	if(x/y == z/w)
	    cout << "Possible" << endl;
	else
	    cout << "Impossible" << endl;
	return 0;
}