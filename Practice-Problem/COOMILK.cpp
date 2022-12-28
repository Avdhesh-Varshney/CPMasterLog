// Bear and Milky Cookies
// Problem Code - COOMILK

// https://www.codechef.com/problems/COOMILK

// Solution:
#include <iostream>
#include <vector>
using namespace std;
bool check(int n, vector<string>& v) {
    if(v[n-1] == "cookie")
        return false;
    for(int i = 1; i < n; i++)
        if(v[i-1] == "cookie" and v[i] == "cookie")
            return false;
    return true;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<string> v;
        for(int i = 0; i < n; i++) {
            string temp;
            cin >> temp;
            v.push_back(temp);
        }
        if(check(n, v))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}