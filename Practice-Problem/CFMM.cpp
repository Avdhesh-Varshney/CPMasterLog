// Making a Meal
// Problem Code - CFMM

// https://www.codechef.com/problems/CFMM

// Solution:
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, a[26] = {0};
        cin >> n;
        string s;
        for(int i = 0; i < n; i++) {
            cin >> s;
            for(int j = 0; j < s.size(); j++) {
                int temp = s[j] - 97;
                a[temp]++;
            }
        }
        vector<int> v;
        v.push_back(a[2]/2);
        v.push_back(a[14]);
        v.push_back(a[3]);
        v.push_back(a[4]/2);
        v.push_back(a[7]);
        v.push_back(a[5]);
        sort(v.begin(), v.end());
        cout << v[0] << endl;
    }
    return 0;
}