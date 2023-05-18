// 13 May 2023

#include <bits/stdc++.h>
using namespace std;

class Array {
    public:
    template<class T>
    static void input(vector<T> &A, int n) {
        for(int i = 0; i < n; i++)
            scanf("%d", &A[i]);
    }
    template<class T>
    static void print(vector<T> &A) {
        for(int i = 0; i < A.size(); i++)
            cout << A[i] << " ";
        cout << endl;
    }
};

class Solution {
    public:
    int bitMagic(int n, vector<int> &arr) {
        // code here
        int cnt = 0;
        for(int i = 0; i < n/2; i++) if(arr[n-i-1] != arr[i]) ++cnt;
        return (cnt/2 + cnt%2);
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        Array::input(arr, n);

        Solution obj;
        int res = obj.bitMagic(n, arr);
        cout << res << endl;
    }
    return 0;
}