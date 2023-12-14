// Bytelandian gold coins
// Problem Code - COINS

// https://www.codechef.com/problems/COINS

// Solution:
#include <iostream>
#include <map>
using namespace std;
map<long long,long long> arr;
long long func(long long t) {
    if(t < 12)
       return t;
    if(arr.find(t) != arr.end())
        return arr[t];
    arr[t] = max(t, (func(t/2)) + (func(t/3)) +(func(t/4)));
    return arr[t];
}
int main() {
    // your code goes here
    int t;
    while(cin >> t)
        cout << func(t) << endl;
    return 0;
}