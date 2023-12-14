// Chef-jumping
// Problem Code - OJUMPS

// https://www.codechef.com/problems/OJUMPS

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    long long int a;
    cin >> a;
	bool flag = false;
	if(a%2 == 0) {
		if(a%3 == 0)
		    flag = true;
	}
	else {
		if(a%3==0 or (a-1)%3==0) 
		    flag = true;
	}
    if(flag)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}