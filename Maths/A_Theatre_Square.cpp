#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    if(m%a == 0)
        m /= a;
    else {
        m /= a;
        m++;
    }
    if(n%a == 0)
        n /= a;
    else {
        n /= a;
        n++;
    }
    cout << n*m << endl;
    return 0;
}