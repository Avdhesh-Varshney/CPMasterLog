// Body Mass Index
// Problem Code - BMI

// https://www.codechef.com/problems/BMI

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int m, h;
	    cin >> m >> h;
	    int bmi = m/(h*h);
	    if(bmi <= 18)
	        cout << "1" << endl;
	    else if(bmi <= 24)
	        cout << "2" << endl;
	    else if(bmi <= 29)
	        cout << "3" << endl;
	    else
	        cout << "4" << endl;
	}
	return 0;
}