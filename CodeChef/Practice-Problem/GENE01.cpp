// Genes
// Problem Code - GENE01

// https://www.codechef.com/problems/GENE01

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
    char c1, c2;
	cin >> c1 >> c2;
	if(c1 == 'R' or c2 == 'R')
	    cout << "R" << endl;
	else if(c1 == 'B' or c2 == 'B')
	    cout << "B" << endl;
	else
	    cout << "G" << endl;
	return 0;
}