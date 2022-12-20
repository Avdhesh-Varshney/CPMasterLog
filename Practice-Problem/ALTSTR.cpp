// Alternating String
// Problem Code - ALTSTR

// Problem
// A binary string is called alternating if no two adjacent characters of the string are equal. Formally, a binary string T of length M is called alternating 
// if T_i = T_{i+1} for each 1 ≤ i < M.
// For example, 0, 1, 01, 10, 101, 010, 1010 are alternating strings while 11, 001, 1110 are not.
// You are given a binary string SS of length N. You would like to rearrange the characters of S such that the length of the longest alternating substring of S is maximum. Find this maximum value.
// A binary string is a string that consists of characters 0 and 1. A string aa is a substring of a string b if aa can be obtained from b by deletion 
// of several (possibly, zero or all) characters from the beginning and several (possibly, zero or all) characters from the end.

// Input Format
// The first line of input contains an integer T, denoting the number of test cases. The T test cases then follow:
// The first line of each test case contains an integer N.
// The second line of each test case contains the binary string S.

// Output Format
// For each test case, output the maximum possible length of the longest alternating substring of S after rearrangement.

// Constraints
// 1 ≤ T ≤ 10^4 
// 1 ≤ N ≤ 10^5 
// S contains only the characters 0 and 1.
// Sum of N over all test cases does not exceed 2⋅10^5 .

// Sample Input      Sample Output
// 4
// 3                 3
// 110
// 4                 4
// 1010
// 4                 1
// 0000
// 7                 5
// 1101101

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, count1 = 0, count0 = 0;
        string s;
        cin >> n >> s;
        for(int i = 0; s[i] != '\0'; i++) {
            if(s[i] == '1')
                count1++;
            else if(s[i] == '0')
                count0++;
        }
        if(count1 == count0 or count1 == count0-1 or count1-1 == count0)
            cout << n << endl;
        else if(count0 == 0 or count1 == 0)
            cout << "1" << endl;
        else {
            int ans = 2*(min(count1, count0));
            cout << ans+1 << endl;
        }
    }
    return 0;
}