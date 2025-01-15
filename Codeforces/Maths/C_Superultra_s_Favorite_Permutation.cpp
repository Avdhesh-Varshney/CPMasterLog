#include <bits/stdc++.h>
using namespace std;
bool checkComposite(int n) {
    for(int i = 2; i <= (n/2)+1; i++) if(n%i == 0) return true;
    return false;
}
int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        if(n <= 4) cout << -1 << endl;
        else {
            int odd = 1;
            for(int i = 1; i <= n; i += 2) {
                cout << i << " ";
                odd = i;
            }
            if(n%2 == 1) n--;
            vector<bool> vis(n+1, false);
            for(int i = n; i > 1; i -= 2) {
                if(checkComposite(odd+i)) {
                    cout << i << " ";
                    vis[i] = true;
                    break;
                }
            }
            for(int i = 2; i <= n; i += 2) {
                if(vis[i]) continue;
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}