// Mario and the Broken String
// Problem Code - BROKENSTRING

// Problem
// Mario was going to gift Princess Peach a string S of even length N.
// Mario was clumsy and thus, broke the string in the middle. He now has two strings A and B such that A = S[1, N/2] and B = S[N/2 +1,N].
// Mario is not sure about the order in which he should join the strings A and B to get the string S. Thus, he joins the strings in any random order. 
// Find whether it is guaranteed that Mario will get the same string S if he joins the strings A and B in any order.
// Note that S[L, R] denotes a substring of string S starting at index L and having a length (R - L + 1).

// Input Format
// The first line of input will contain a single integer T, denoting the number of test cases.
// Each test case consists of two lines of input:
// The first line of each test case contains N - the length of the initial string S.
// The second line contains the string S.

// Output Format
// For each test case, print YES if it is guaranteed that Mario will get the same string S irrespective of the order in which he joins the strings A and B and NO otherwise.
// You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

// Constraints
// 1 ≤ T ≤ 3000
// 1 ≤ N ≤ 1000
// N is even.
// S consists of lowercase english alphabets

// Sample Input      Sample Output
// 4
// 6                 Yes
// abcabc
// 6                 No
// abcdef
// 4                 Yes
// aaaa
// 4                 No
// baab

// Solution:
#include <iostream>
using namespace std;
bool check(int m, string s) {
    for(int i = 0; i < m; i++)
        if(s[i] != s[m+i])
            return false;
    return true;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        if(check(n/2, s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
