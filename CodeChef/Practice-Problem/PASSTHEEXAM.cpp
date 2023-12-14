// Pass the Exam
// Problem Code - PASSTHEEXAM

// https://www.codechef.com/problems/PASSTHEEXAM

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    if((a+b+c >= 100) and (a >= 10) and (b >= 10) and (c >= 10))
	        cout << "PASS\n";
	    else
	        cout << "FAIL\n";
	}
	return 0;
}