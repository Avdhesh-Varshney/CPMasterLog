// Penalty Shots
// Problem Code - PENALTY

// https://www.codechef.com/problems/PENALTY

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, a[11];
	cin >> t;
	for(int i = 0; i < t; i++) {
	    a[0] = 0;
	    int count1 = 0, count2 = 0;
	    for(int j = 1; j <= 10; j++)
	        cin >> a[j];
	    for(int k = 1; k <= 10; k++) {
	        if(k%2 == 0)
	            count2 += a[k];
	        else
	            count1 += a[k];
	    }
	    if(count1 > count2)
	        cout << "1" << endl;
	    else if(count1 == count2)
	        cout << "0" << endl;
	    else
	        cout << "2" << endl;
	}
	return 0;
}