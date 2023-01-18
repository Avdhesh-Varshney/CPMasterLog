// Problems in your to-do list
// Problem Code - TODOLIST

// https://www.codechef.com/problems/TODOLIST

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n;
	    cin >> n;
	    int a[n], count = 0;
	    for(int j = 0; j < n; j++) {
	        cin >> a[j];
	        if(a[j] >= 1000)
	            count++;
	    }
	    cout << count << endl;
	}
	return 0;
}