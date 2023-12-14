// 10 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void Rearrange(int arr[], int n)
        {
            // Your code goes here
            vector<int> v;
            for(int i = 0; i < n; i++)
                if(arr[i] < 0) v.emplace_back(arr[i]);
            for(int i = 0; i < n; i++)
                if(arr[i] >= 0) v.emplace_back(arr[i]);
            for(int i = 0; i < n; i++) arr[i] = v[i];
        }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        long long j = 0;
        Solution ob;
        ob.Rearrange(arr, n);
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}