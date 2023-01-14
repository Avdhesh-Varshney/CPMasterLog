// Card Removal
// Problem Code - REMOVECARDS

// https://www.codechef.com/problems/REMOVECARDS

// Solution:
#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, large = -1;
        cin >> n;
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            m[temp]++;
        }
        for(auto i : m)
            if(i.second > large)
                large = i.second;
        cout << n-large << endl;
    }
    return 0;
}