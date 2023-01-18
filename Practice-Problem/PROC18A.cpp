// The Great Run
// Problem Code - PROC18A

// https://www.codechef.com/problems/PROC18A

// Solution:
#include <iostream>
using namespace std;
void run(int n, int k, int a[]) {
    int ans = 0;
    for(int i = 0; i < n-k+1; i++) {
        int j = 0, sum = 0;
        while(j < k) {
            sum += a[i+j];
            j++;
        }
        if(sum > ans)
            ans = sum;
    }
    cout << ans << endl;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        run(n, k, a);
    }
    return 0;
}