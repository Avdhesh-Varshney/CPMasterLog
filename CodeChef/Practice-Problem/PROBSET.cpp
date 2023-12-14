// Chef and Problem Setting
// Problem Code : PROBSET

// https://www.codechef.com/problems/PROBSET

// Solution:
#include <iostream>
using namespace std;
bool check(int &m, string &str) {
    for(int i = 0; i < m; i++)
        if(str[i] == '0')
            return true;
    return false;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, m, invalid = 0, weak = 0;
        cin >> n >> m;
        string str[n], num[n];
        for(int i = 0; i < n; i++)
            cin >> str[i] >> num[i];
        for(int i = 0; i < n; i++) {
            if(str[i] == "correct") {
                if(check(m, num[i]))
                    invalid++;
            }
            else {
                if(!check(m, num[i]))
                    weak++;
            }
        }
        if(invalid > 0)
            cout << "INVALID" << endl;
        else if(weak > 0)
            cout << "WEAK" << endl;
        else
            cout << "FINE" << endl;
    }
    return 0;
}