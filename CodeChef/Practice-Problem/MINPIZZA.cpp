// Minimum Pizzas
// Problem Code - MINPIZZA

// https://www.codechef.com/problems/MINPIZZA

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, x, count = 0;
        cin >> n >> x;
        while(count*4 < n*x)
            count++;
        cout << count << endl;
    }
    return 0;
}