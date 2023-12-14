// Is it a VOWEL or CONSONANT
// Problem Code - VOWELTB

// https://www.codechef.com/problems/VOWELTB

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	char c;
	cin >> c;
	if((c == 'A') or (c == 'E') or (c == 'I') or (c == 'O') or (c == 'U'))
	    cout << "Vowel" << endl;
	else
	    cout << "Consonant" << endl;
	return 0;
}