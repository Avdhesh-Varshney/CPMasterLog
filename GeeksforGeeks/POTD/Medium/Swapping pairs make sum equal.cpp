// 05 June 2024

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        int suma = 0, sumb = 0;
        for(int i = 0; i < n; i++) suma += a[i];
        for(int i = 0; i < m; i++) sumb += b[i];
        
        if((suma-sumb)%2 != 0) return -1;
        sort(a, a+n); sort(b, b+m);
        int target = (suma-sumb)/2, i = 0, j = 0;
        
        while(i < n && j < m) {
            if(a[i]-b[j] == target) return 1;
            else if(a[i]-b[j] < target) ++i;
            else ++j;
        }
        return -1;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.findSwapValues(a, n, b, m) << endl;
    }
    return 0;
}