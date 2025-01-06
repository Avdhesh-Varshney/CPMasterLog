#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 4e5 + 5;
bool apos[N], aneg[N], bpos[N], bneg[N], posspos[N], possneg[N];

signed main() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> a(n), b(m);
    int sumA = 0, sumB = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sumA += a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
        sumB += b[i];
    }
    for(int i = 0; i < n; i++) {
        if(abs(a[i]-sumA) < N) {
            if(sumA-a[i] < 0) aneg[a[i]-sumA] = true;
            else apos[sumA-a[i]] = true;
        }
    }
    for(int i = 0; i < m; i++) {
        if(abs(b[i]-sumB) < N) {
            if(sumB-b[i] < 0) bneg[b[i]-sumB] = true;
            else bpos[sumB-b[i]] = true;
        }
    }
    for(int i = 1; i < N; i++) {
        for(int j = 1; j < N; j++) {
            if(i*j > N) break;
            if(apos[i] && bpos[j]) posspos[i*j] = true;
            if(apos[i] && bneg[j]) possneg[i*j] = true;
            if(aneg[i] && bpos[j]) possneg[i*j] = true;
            if(aneg[i] && bneg[j]) posspos[i*j] = true;
        }
    }
    while(q--) {
        int x;
        cin >> x;
        if(x > 0) {
            if(posspos[x]) cout << "YES\n";
            else cout << "NO\n";
        } else {
            if(possneg[-x]) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}