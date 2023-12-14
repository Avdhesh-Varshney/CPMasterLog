// Dividing Stamps
// Problem Code - DIVIDING

// https://www.codechef.com/problems/DIVIDING

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int n, sum = 0, suma = 0;
    cin >> n;
    int c[n];
    for(int i = 0; i < n; i++)
        cin >> c[i];
    for(int i = 0; i < n; i++) {
        suma += c[i];
        sum += (i+1);
    }
    if(sum == suma)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}