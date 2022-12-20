// Magic Pairs
// Problem Code - ALEXNUMB

// Problem
// Alexandra has some distinct integer numbers a1,a2...an. Count number of pairs (i,j) such that:
// 1≤ i ≤ n, 1≤ j ≤ n, a_i < a_j
 
// Input
// The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.The first line of each test case contains a single integer n denoting the number of numbers Alexandra has. The second line contains n space-separated distinct integers a1, a2, ..., an denoting these numbers.

// Output
// For each test case, output a single line containing number of pairs for corresponding test case.
 
// Constraints
// 1 ≤ T ≤ 4
// 1 ≤ n ≤ 100000
// 0 ≤ a_i ≤ 10^9
// All the a_i are distinct

// Sample Input      Sample Output
// 2
// 2                 1
// 12 11
// 3                 3
// 13 11 12

// Solution:
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        ll n, count = 0, sum = 0, flag = 0;
        cin >> n;
        unordered_map<ll, ll> m;
        for(ll i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            m[temp]++;
        }
        for(auto i = m.begin(); i != m.end(); i++)
            sum += i->second;
        for(auto i = m.begin(); i != m.end(); i++) {
            flag += i->second;
            count += (sum-flag);
        }
        cout << count << endl;
    }
    return 0;
}