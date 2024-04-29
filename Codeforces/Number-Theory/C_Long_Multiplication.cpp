#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string x, y, s1, s2;
    cin >> t;
    while(t--) {
        cin >> x >> y;
        int n = x.length(), flag = 0;
        for(int i = 0; i < n; i++) {
            if(flag) {
                if(x[i] > y[i]) {
                    s1 += y[i];
                    s2 += x[i];
                } else {
                    s2 += y[i];
                    s1 += x[i];
                }
            } else {
                if(x[i] == y[i]) {
                    s2 += y[i];
                    s1 += x[i];
                } else if(x[i] > y[i]) {
                    s2 += y[i];
                    s1 += x[i];
                    flag = 1;
                } else {
                    s1 += y[i];
                    s2 += x[i];
                    flag = 1;
                }
            }
        }
        cout << s1 << endl << s2 << endl;
        s1 = "", s2 = "";
    }
    return 0;
}