// Little Elephant and Strings
// Problem Code - LUCKYSTR

// https://www.codechef.com/problems/LUCKYSTR

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int k, n;
    cin >> k >> n;
    string arr[k];
    for(int i = 0; i < k; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++) {
        string found;
        cin >> found;
        if(found.size() >= 47) {
            cout << "Good" << endl;
            continue;
        }
        bool flag = true;
        for(int j = 0; j < k; j++) {
            if(found.find(arr[j]) < found.size()) {
                cout << "Good" << endl;
                flag = false;
                break;
            }
        }
        if(flag)
            cout << "Bad" << endl;
    }
    return 0;
}