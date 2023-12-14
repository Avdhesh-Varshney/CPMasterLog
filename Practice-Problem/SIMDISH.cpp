// Similar Dishes
// Problem Code - SIMDISH

// https://www.codechef.com/problems/SIMDISH

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        vector<string> a, b;
        string temp;
        int count = 0;
        for(int i = 0; i < 4; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        for(int i = 0; i < 4; i++) {
            cin >> temp;
            b.push_back(temp);
        }
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                if(a[i] == b[j])
                    count++;
            }
        }
        if(count >= 2)
            cout << "similar" << endl;
        else
            cout << "dissimilar" << endl;
    }
    return 0;
}