// Passing Marks
// Problem Code - PSGRADE

// https://www.codechef.com/problems/PSGRADE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int am, bm, cm, tm, a, b, c;
	    cin >> am >> bm >> cm >> tm >> a >> b >> c;
	    if((a >= am) and (b >= bm) and (c >= cm) and ((a+b+c) >= tm))
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}