// AI Analysing Code
// Problem Code - AIANALYSE

// Problem
// Chef has recently introduced a feature which allows you to open any user’s submitted code (not just your own), and ask an AI to explain that code in English.
// For example, you can go to https://www.codechef.com/viewsolution/70530506 and click on "Analyse This Code".
// But there is a restriction that the feature works only on codes which are at most 10001000 characters long. Given the number of characters, CC, in a particular code,
// output whether the feature is available on this code or not.

// Input Format
// The only line of input will contain a single integer C, denoting the number of characters in the code.

// Output Format
// Output a single line which contains either "Yes", if the feature is available on this code, or "No", if not.
// You may print each character of the string in either uppercase or lowercase (for example, the strings NO, nO, No, and no will all be treated as identical).

// Constraints
// 1 ≤ C ≤ 10000

// Sample Input      Sample Output
// 50                Yes

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int c;
	cin >> c;
	if(c <= 1000)
	    cout << "Yes" << endl;
	else
	    cout << "No" << endl;
	return 0;
}