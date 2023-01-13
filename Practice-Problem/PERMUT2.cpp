// Ambiguous Permutations
// Problem Code - PERMUT2

// https://www.codechef.com/problems/PERMUT2

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
    int n, a[100001];
    while(1) {
        scanf("%d", &n);
        if(n == 0)
            break;
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        for(int i = 1; i <= n; i++) {
            if(a[a[i]] != i) {
                cout << "not ambiguous" << endl;
                break;
            }
            if(i == n)
                cout << "ambiguous" << endl;
        }
    }
	return 0;
}