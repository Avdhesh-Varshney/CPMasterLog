#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n, m;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        int arr[n];
        set<int> st;
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            st.insert(arr[i]);
            if(maxi < arr[i]) maxi = arr[i];
        }
        int num = 1, sum = 0;
        while(num) {
            if(st.find(num) != st.end()) {
                ++num;
                continue;
            }
            sum += num;
            if(sum > m) {
                cout << "NO" << endl;
                break;
            }
            st.insert(num);
            if(sum == m) {
                int temp = 0;
                for(int k = 1; k <= maxi; k++) {
                    if(st.find(k) != st.end()) continue;
                    temp = 1;
                    break;
                }
                if(!temp) cout << "YES" << endl;
                else cout << "NO" << endl;
                break;
            }
            ++num;
        }
    }
    return 0;
}