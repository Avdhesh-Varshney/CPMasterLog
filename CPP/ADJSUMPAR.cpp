// Adjacent Sum Parity
// Problem Code - ADJSUMPAR

// Problem
// Chef has an array A of length N.
// Chef forms a binary array B of length N using the parity of the sums of adjacent elements in A. Formally,
// B_i = (A_i + A_{i+1}) % 2  for 1 ≤ i ≤ N−1
// B_N = (A_N + A_1) % 2
// Here x%y denotes the remainder obtained when x is divided by y.

// Chef lost the array A and needs your help. Given array B, determine whether there exits any valid array A which could have formed B.

// Input Format
// The first line contains a single integer T — the number of test cases. Then the test cases follow.
// The first line of each test case contains an integer N — the size of the array A.
// The second line of each test case contains N space-separated integers B_1, B_2, …,B_N denoting the array B.
// Output Format
// For each testcase, output YES if there exists a valid array A, NO otherwise.
// You can print any character in any case. For example YES, Yes, yEs are all considered same.

// Constraints
// 1 ≤ T ≤ 1000
// 2 ≤ N ≤ 10^5 
// B_i ∈ {0,1}
// The sum of N over all test cases do not exceed 3⋅10^5.

// Sample Input      Sample Output
// 4
// 2                 Yes
// 0 0
// 2                 No
// 1 0
// 4                 Yes
// 1 0 1 0
// 3                 No
// 1 0 0

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int b[n];
	    for(int i = 0; i < n; i++)
	        cin >> b[i];
	    int sum = 0; 
	    for(int i = 0; i < n; i++)
	        sum += b[i];
	    if(sum%2 == 0)
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}