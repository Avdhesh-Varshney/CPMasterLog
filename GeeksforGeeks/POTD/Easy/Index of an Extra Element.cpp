// 08 June 2024

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findExtra(int n, int arr1[], int arr2[]) {
        // add code here.
        if(arr1[n-1] != arr2[n-2]) return n-1;
        for(int i = 0; i < n-1; i++) if(arr1[i] != arr2[i]) return i;
        return -1;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr1[n], arr2[n-1];
        for(int i = 0; i < n; i++) cin >> arr1[i];
        for(int i = 0; i < n-1; i++) cin >> arr2[i];
        Solution obj;
        cout << obj.findExtra(n, arr1, arr2) << endl;
    }
    return 0;
}