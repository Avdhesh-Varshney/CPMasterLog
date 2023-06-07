// 24 May 2023

#include <bits/stdc++.h>
using namespace std;

class Array {
    public:
    template <class T>
    static void input(vector<T>& A, int n) {
        for(int i = 0; i < n; i++)
            scanf("%d", &A[i]);
    }

    template <class T>
    static void print(vector<T>& A) {
        for(int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

class Solution{
    public:
    int getMaximum(int N, vector<int> &arr) {
        // code here
        long long sum = 0;
        for(auto &el: arr) sum += el;
        while(sum%N != 0) --N;
        return N;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N;
        scanf("%d", &N);

        vector<int> arr(N);
        Array::input(arr, N);

        Solution obj;
        int res = obj.getMaximum(N, arr);
        cout << res << endl;
    }
    return 0;
}