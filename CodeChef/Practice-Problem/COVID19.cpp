// CoronaVirus Spread
// Problem Code - COVID19

// https://www.codechef.com/problems/COVID19

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
        int x[n], minimum = 10, count = 1, maximum = 0;
        for(int i = 0; i < n; i++)
            cin >> x[i];
        for(int i = 0; i < n-1; i++) {
            if(abs(x[i] - x[i+1]) <= 2)
                count++;
            else {
                maximum = max(maximum, count);
                minimum = min(minimum, count);
                count = 1;
            }
        }
        maximum = max(maximum, count);
        minimum = min(minimum, count);
        cout << minimum << " " << maximum << endl;
    }
    return 0;
}