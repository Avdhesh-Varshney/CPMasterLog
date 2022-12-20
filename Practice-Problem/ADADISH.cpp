// Ada and Dishes
// Problem Code - ADADISH

// Problem
// Chef Ada is preparing N dishes (numbered 1 through N). For each valid i, it takes C_i minutes to prepare the i-th dish. The dishes can be prepared in any order.
// Ada has a kitchen with two identical burners. For each valid i, to prepare the i-th dish, she puts it on one of the burners and after C_i minutes, 
// removes it from this burner; the dish may not be removed from the burner before those C_i minutes pass, because otherwise it cools down and gets spoiled. 
// Any two dishes may be prepared simultaneously, however, no two dishes may be on the same burner at the same time. Ada may remove a dish from a burner and put another dish on the same burner at the same time.
// What is the minimum time needed to prepare all dishes, i.e. reach the state where all dishes are prepared?

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains a single integer N.
// The second line contains NN space-separated integers C_1, C_2, …,C_N.

// Output
// For each test case, print a single line containing one integer ― the minimum number of minutes needed to prepare all dishes.

// Constraints
// 1 ≤ T ≤ 1,000
// 1 ≤ N ≤ 4
// 1 ≤ C_i ≤5 for each valid i

// Subtasks
// Subtask #1 (1 points): C_1 = C_2 = … = C_N
// Subtask #2 (99 points): original constraints

// Sample Input      Sample Output
// 3
// 3                 4
// 2 2 2
// 3                 3
// 1 2 3
// 4                 7
// 2 3 4 5

// Solution:
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int c[n], s1 = 0, s2 = 0;
        for(int i = 0; i < n; i++)
            cin >> c[i];
        sort(c, c+n, greater<int>());
        for(int i = 0; i < n; i++) {
            if(s1 > s2)
                s2 += c[i];
            else
                s1 += c[i];
        }
        cout << max(s1, s2) << endl;
    }
    return 0;
}