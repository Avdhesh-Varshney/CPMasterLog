// Good Weather
// Problem Code - GOODWEAT

// https://www.codechef.com/problems/GOODWEAT

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, a[7];
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int count0 = 0, count = 0;
	    for(int j =0; j < 7; j++)
	        cin >> a[j];
	    for(int k = 0; k < 7; k++) {
	        if(a[k] == 0)
	            count0++;
	        else
	            count++;
	    }
	    if(count > count0)
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}