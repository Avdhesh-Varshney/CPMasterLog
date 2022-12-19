// Count the ACs
// Problem Code - ACS

// Problem
// There are 10 problems in a contest. You know that the score of each problem is either 1 or 100 points.
// Chef came to know the total score of a participant and he is wondering how many problems were actually solved by that participant.
// Given the total score P of the participant, determine the number of problems solved by the participant. Print -1 in case the score is invalid.

// Input Format
// First line will contain T, number of test cases. Then the test cases follow.
// Each test case contains of a single line containing a single integer P - denoting the number of points scored by the participant.

// Output Format
// For each testcase, output the number of problems solved by the participant or −1 if the score is invalid.

// Constraints
// 1 ≤ T ≤ 1000
// 0 ≤ P ≤ 1000

// Sample Input      Sample Output
// 5
// 103               4
// 0                 0
// 6                 6
// 142               -1
// 1000              10

// Solution:
#include <iostream>
using namespace std;
void accuracy(int num) {
    int k = num/100;
    int n = num%100;
    if(n+k <= 10)
		cout << n+k << endl;
    else
		cout << -1 << endl;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int pp;
	    cin >> pp;
	    accuracy(pp);
	}
	return 0;
}