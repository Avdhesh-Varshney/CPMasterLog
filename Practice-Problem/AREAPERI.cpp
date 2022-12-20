// Area OR Perimeter
// Problem Code - AREAPERI

// Problem
// Write a program to obtain length (L) and breadth (B) of a rectangle and check whether its area is greater or perimeter is greater or both are equal.

// Input Format
// First line will contain the length (L) of the rectangle.
// Second line will contain the breadth (B) of the rectangle.

// Output Format
// Output 2 lines.
// In the first line print "Area" if area is greater otherwise print "Peri" and if they are equal print "Eq".(Without quotes).
// In the second line print the calculated area or perimeter (whichever is greater or anyone if it is equal).

// Constraints
// 1 ≤ L ≤ 1000
// 1 ≤ B ≤ 1000

// Sample Input      Sample Output
// 1                 Peri
// 2                 6

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	long int l, b;
	cin >> l >> b;
	long int a = l*b;
	long int p = 2*(l+b);
	if(a == p)
	    cout << "Eq\n" << a << endl;
	else if(a > p)
	    cout << "Area\n" << a << endl;
	else
	    cout << "Peri\n" << p << endl;
	return 0;
}