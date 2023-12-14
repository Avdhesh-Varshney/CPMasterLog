#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ans = 0, temp = 0, num;
        for(int i = 0; i < n; i++) {
            cin >> num;
            if(num == 0) temp++;
            else {
                ans = max(ans, temp);
                temp = 0;
            }
        }
        ans = max(ans, temp);
        cout << ans << endl;
    }
    return 0;
}