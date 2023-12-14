// 04 April 2023

#include <bits/stdc++.h>
using namespace std;

int minSteps(string str) {
    // Write your code here.
    int ans = 0;
    for(int i = 0; i < str.length()-1; i++)
        if(str[i] != str[i+1])
            ans++;
    return (ans%2 == 0) ? ans/2 + 1 : ans/2 + 2;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
    return 0;
}