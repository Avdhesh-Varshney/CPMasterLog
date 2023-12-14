// Chef and Strings
// Problem Code - CHEFSTR1

// https://www.codechef.com/problems/CHEFSTR1

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t, n;
    cin >> t;
    while(t--) {
        long long int n;
        cin >> n;
        long long int s[n], count = 0;
        for(int i = 0; i < n; i++)
            cin >> s[i];
        for(long long int i = 0; i < n-1; i++) {
            long long int m = max(s[i], s[i+1]);
            long long int sm = min(s[i], s[i+1]);
            long long int l = (m-1) - sm;
            count += l;
        }
        cout << count << endl;
    }
    return 0;
}