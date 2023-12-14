// Suspense String
// Problem Code - SUSSTR

// https://www.codechef.com/problems/SUSSTR

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s, T = "";
        cin >> s;
        int i = 0, j = n-1;
        while(i <= j) {
            if(s[i] == '0')
                T = s[i] + T;
            else
                T = T + s[i];
            if(i < j) {
                if(s[j] == '0')
                    T = T + s[j];
                else
                    T = s[j] + T;
                j--;
            }
            i++;
        }
        cout << T << endl;
    }
    return 0;
}