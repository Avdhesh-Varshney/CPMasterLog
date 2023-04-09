// 30 March 2023

#include <bits/stdc++.h>
using namespace std;

class Array {
    public:
    template<class T>
    static void input(vector<T> &A, int n) {
        for(int i = 0; i < n; i++)
            cin >> A[i];
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
    int minimumInteger(int N, vector<int> &A) {
        // code here
        long long sum = 0;
        for(int i = 0; i < N; sum += A[i++]);
        int m = INT_MAX;
        for(auto &i : A)
            if(sum <= (N*1LL*i))
                m = min(m, i);
        return m;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N;
        cin >> N;
        vector<int> A(N);
        Array::input(A, N);
        Solution obj;
        int res = obj.minimumInteger(N, A);
        cout << res << endl;
    }
    return 0;
}