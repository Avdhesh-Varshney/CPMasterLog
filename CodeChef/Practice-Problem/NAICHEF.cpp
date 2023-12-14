// Naive Chef
// Problem Code - NAICHEF

// https://www.codechef.com/problems/NAICHEF

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, a, b;
        double counta = 0, countb = 0;
        cin >> n >> a >> b;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] == a) counta++;
            if(arr[i] == b) countb++;
        }
        double pa = counta/n;
        double pb = countb/n;
        cout << pa*pb << endl;
    }
    return 0;
}