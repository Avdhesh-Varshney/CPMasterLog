// Farmer Feb
// Problem Code - POTATOES

// https://www.codechef.com/problems/POTATOES

// Solution:
#include <iostream>
using namespace std;
bool isprime(int n) {
    if(n == 2)
        return true;
    int count = 0;
    for(int i = 2; i < n; i++) {
        if(n%i == 0)
            count++;
    }
    if(count == 0)
        return true;
    else
        return false;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        int num = x+y+1;
        while(!isprime(num)) {
            num++;
        }
        cout << num-x-y << endl;
    }
    return 0;
}