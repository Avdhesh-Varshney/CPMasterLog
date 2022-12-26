// Group Assignment
// Problem Code - GRPASSN

// https://www.codechef.com/problems/GRPASSN

// Solution:
#include <iostream>
#include <unordered_map>
using namespace std;
bool check(unordered_map<int, int>& m) {
    for(auto i = m.begin(); i != m.end(); i++)
        if((i->second)%(i->first) != 0)
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
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            m[temp]++;
        }
        if(check(m))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}