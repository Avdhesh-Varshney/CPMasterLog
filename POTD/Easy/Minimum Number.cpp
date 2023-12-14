// 23 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){
        // Code here
        for(auto &i : arr)
            if(i%2 != 0) return 1;
        return 2;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.minimumNumber(n, arr) << endl;
    }
}