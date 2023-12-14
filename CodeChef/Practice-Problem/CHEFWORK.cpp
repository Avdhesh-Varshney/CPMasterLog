// Workers
// Problem Code - CHEFWORK

// https://www.codechef.com/problems/CHEFWORK

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int n;
    cin >> n;
    int c[n], t[n];
    long int min = 100000, min2 = 100000, min3 = 100000, sum = 0;
    for(int i = 0; i < n; i++)
        cin >> c[i];
    for(int i = 0; i < n; i++)
        cin >> t[i];
    for(int i = 0; i < n; i++) {
        if(t[i] == 1) {
            if(min >= c[i])
                min = c[i];
        }
        else if(t[i] == 2) {
            if(min2 >= c[i])
                min2 = c[i];
        }
        else if(t[i] == 3) {
            if(min3 >= c[i])
                min3 = c[i];
        }
    }
    sum = min + min2;
    if(sum > min3)
        cout << min3 << endl;
    else
        cout << sum << endl;
    return 0;
}