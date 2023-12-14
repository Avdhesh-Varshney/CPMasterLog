// Lucky Four
// Problem Code - LUCKYFR

// https://www.codechef.com/problems/LUCKYFR

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	int a[t];
	for(int i = 0; i < t; i++)
	    cin >> a[i];
	for(int j = 0; j < t; j++) {
	    int num = a[j], count = 0;
	    while(num > 0) {
	        int rem = num % 10;
	        num /= 10;
	        if(rem == 4)
	            count++;
	    }
	    cout << count << endl;
	}
	return 0;
}