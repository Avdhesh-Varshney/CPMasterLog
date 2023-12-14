#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a[3], count = 0;
        for(int j = 0; j < 3; j++) {
            cin >> a[j];
            if(a[j] == 1)
                count++;
        }
        if(count >= 2)
            ans++;
    }
    cout << ans << endl;
    return 0;
}