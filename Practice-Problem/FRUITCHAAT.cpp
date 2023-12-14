// Chef and His Fruit Stand
// Problem Code - FRUITCHAAT

// https://www.codechef.com/problems/FRUITCHAAT

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y;
	    cin >> x >> y;
	    int s = x/2;
	    if(s >= y)
	        cout << y << endl;
	    else
	        cout << s << endl;
	}
	return 0;
}