// Chef and Socks
// Problem Code - CHEFSOCK

// https://www.codechef.com/problems/CHEFSOCK

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int j, s, m;
	cin >> j >> s >> m;
	if(((m-j)/s)%2 == 0)
	    cout << "Lucky Chef" << endl;
	else
	    cout << "Unlucky Chef" << endl;
	return 0;
}