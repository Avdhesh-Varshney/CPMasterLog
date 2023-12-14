// Chef and Mean
// Problem Code - CHFM

// https://www.codechef.com/problems/CHFM

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
        long long int a[n], sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        long double mean = (long double)sum / n;
        long double sum_2 = mean * (n-1);
        long double x = sum - sum_2, count = 0;
        for(int i = 0; i < n; i++) {
            long double y = (long double)a[i];
            if(x == y) {
                cout << i + 1 << endl;
                count = 1;
                break;
            }
        }
        if(count == 0)
            cout << "Impossible" << endl;
    }
    return 0;
}