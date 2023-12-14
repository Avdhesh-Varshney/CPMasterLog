// Mahasena
// Problem Code - AMR15A

// https://www.codechef.com/problems/AMR15A

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int n, ce = 0, co = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
	    cin >> a[i];
	    if(a[i]%2 == 0)
	        ce++;
	    else
	        co++;
	}
	if(ce > co)
	    cout << "READY FOR BATTLE\n";
	else
	    cout << "NOT READY\n";
	return 0;
}