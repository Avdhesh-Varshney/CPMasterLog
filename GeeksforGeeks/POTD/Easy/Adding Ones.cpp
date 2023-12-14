// 11 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void update(int a[], int n, int updates[], int k)
    {
        // Your code goes here
        for(int i = 0; i < k; i++) a[updates[i]-1]++;
        int y = a[n-1], x = k;
        for(int j = n-2; j >= 1; j--) {
            int freq = a[j];
            a[j] = x-y;
            x = x-y;
            y = freq;
        }
        a[n-1] = k;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n] = {0}, updates[k] = {0};
        for(int i = 0; i < k; i++) cin >> updates[i];
        Solution ob;
        ob.update(a, n, updates, k);
        for(int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}