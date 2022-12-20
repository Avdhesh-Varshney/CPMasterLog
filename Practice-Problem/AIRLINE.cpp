// AirLine Restrictions
// Problem Code - AIRLINE

// Problem
// Chef has 3 bags that she wants to take on a flight. They weigh A, B, and C kgs respectively. She wants to check-in exactly two of these bags and carry the remaining one bag with her.
// The airline restrictions says that the total sum of the weights of the bags that are checked-in cannot exceed D kgs and the weight of the bag which is carried cannot exceed E kgs. Find if Chef can take all the three bags on the flight.

// Input Format
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// Each testcase contains a single line of input, five space separated integers A, B, C, D, E.

// Output Format
// For each testcase, output in a single line answer "YES" if Chef can take all the three bags with her or "NO" if she cannot.
// You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

// Constraints
// 1 ≤ T ≤ 36000
// 1 ≤ A, B, C ≤ 10
// 15 ≤ D ≤ 20
// 5 ≤ E ≤ 10

// Subtasks
// Subtask #1 (100 points): original constraints

// Sample Input      Sample Output
// 3
// 1 1 1 15 5        Yes
// 8 7 6 15 5        No
// 8 5 7 15 6        Yes

// Solution:
#include <iostream>
using namespace std;
bool airline(int a, int b, int c, int d, int e) {
    if((a+b <= d) and (c <= e))
        return true;
    else if((b+c <= d) and (a <= e))
        return true;
    else if((c+a <= d) and (b <= e))
        return true;
    return false;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int a, b, c, d, e;
	    cin >> a >> b >> c >> d >> e;
	    bool result = airline(a, b, c, d, e);
	    if(result)
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}