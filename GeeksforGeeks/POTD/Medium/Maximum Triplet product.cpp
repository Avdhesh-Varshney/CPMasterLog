// 10 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    long long maxTripletProduct(long long arr[], int n) {
        // Complete the function
        sort(arr, arr+n);
        return max(arr[0]*arr[1]*arr[n-1], arr[n-1]*arr[n-2]*arr[n-3]);
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, i;
        cin >> n;
        long long arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.maxTripletProduct(arr, n) << endl;
    }
    return 0;
}