// ATM Machine
// Problem Code - ATM2

// Problem
// There is an ATM machine. Initially, it contains a total of K units of money. N people (numbered 1 through N) want to withdraw money; 
// for each valid i, the i-th person wants to withdraw A_i units of money.
// The people come in and try to withdraw money one by one, in the increasing order of their indices. Whenever someone tries to withdraw money, 
// if the machine has at least the required amount of money, it will give out the required amount. Otherwise, it will throw an error and not give out anything; 
// in that case, this person will return home directly without trying to do anything else.For each person, 
// determine whether they will get the required amount of money or not.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains two space-separated integers N and K.
// The second line contains N space-separated integers A_1, A_2,…,A_N.

// Output
// For each test case, print a single line containing a string with length N. For each valid i, the i-th character of this string should be '1' 
// if the i-th person will successfully withdraw their money or '0' otherwise.

// Constraints
// 1 ≤ T ≤ 100
// 1 ≤ N ≤ 100
// 1 ≤ A_i ≤ 1,000,000 for each valid i
// 1 ≤ K ≤ 1,000,000

// Sample Input      Sample Output
// 2
// 5 10              11010
// 3 5 3 2 1
// 4 6               0010
// 10 8 6 4

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n, k;
	    cin >> n >> k;
	    int a[n], s[n];
	    for(int i = 0; i < n; i++)
	        cin >> a[i];
	    for(int i = 0; i < n; i++) {
	        if(k >= a[i]) {
	            s[i] = 1;
	            k -= a[i];
	        }
	        else {
	            s[i] = 0;
	        }
	    }
	    for(int j = 0; j < n; j++)
	        cout << s[j];
	    cout << endl;
	}
	return 0;
}