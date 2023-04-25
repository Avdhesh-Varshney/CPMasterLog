#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n][n], cnt = 1, cnt2 = 2;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(cnt <= n*n) {
                    cout << cnt << " ";
                    cnt += 2;
                }
                else {
                    cout << cnt2 << " ";
                    cnt2 += 2;
                }
            }
            cout << endl;
        }
    }
    return 0;
}