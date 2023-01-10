// Minimum number of coins
// Problem Code - MINCOINS

// https://www.codechef.com/problems/MINCOINS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
    int x;
	cin >> t;
	while(t--){
	    cin >> x;
        int count10 = 0, count5 = 0;
        if(x%5 != 0)
            cout << "-1\n";
         else {
             count10 = x/10;
             x = x%10;
             count5 = x/5;
             cout << count10 + count5 << endl;
         }
	}
	
	return 0;
}