#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        long long sum = 0, oper = 0;
        bool flag = false;
        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            sum += (long long)abs(temp);
            if(temp <= 0) {
                if(temp < 0) flag = true;
            } else {
                if(flag) ++oper;
                flag = false;
            }
        }
        if(flag) ++oper;
        cout << sum << " " << oper << endl;
    }
    return 0;
}