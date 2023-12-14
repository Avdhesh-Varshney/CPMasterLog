// 11 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int a, int b, int c) {
        // code here
        int arr[3];
        arr[0] = a, arr[1] = b, arr[2] = c;
        sort(arr, arr+3);
        int mid = a+b+c - arr[2] - arr[0];
        if(arr[2] > (mid+arr[0])*2) return -1;
        return a+b+c;
    }
};

int main() {
    int T;
    cin >> T;
    while(T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        int ans = ob.solve(a, b, c);
        cout << ans << endl;
    }
    return 0;
}