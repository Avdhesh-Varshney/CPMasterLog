// Id and Ship
// Problem Code - FLOW010

// https://www.codechef.com/problems/FLOW010

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	char c;
	while(t--) {
	    cin >> c;
	    if((c == 'B') or (c == 'b'))
	        cout << "BattleShip" << endl;
	    else if((c == 'C') or (c == 'c'))
	        cout << "Cruiser" << endl;
	    else if((c == 'D') or (c == 'd'))
	        cout << "Destroyer" << endl;
	    else if((c == 'F') or (c == 'f'))
	        cout << "Frigate" << endl;
	}
	return 0;
}