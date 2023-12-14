// Easy Math
// Problem Code - RPD

// https://www.codechef.com/problems/RPD

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
        int a[n], large = -1;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n and i != j; j++) {
                int prod = a[i]*a[j], sum = 0;
                while(prod > 0) {
                    sum += prod%10;
                    prod /= 10;
                }
                if(sum > large)
                    large = sum;
            }
        }
        cout << large << endl;
    }
    return 0;
}