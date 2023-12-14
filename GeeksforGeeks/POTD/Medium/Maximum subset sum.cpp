// 14 May 2023

#include <bits/stdc++.h>
using namespace std;

class IntArray {
    public:
    template<class T>
    static void input(vector<T>& A, int n) {
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
    long long findMaxSubsetSum(int N, vector<int> &A) {
        // code here
        long long second = 0, first = A[0];
        for(int i = 1; i < N; i++) second = max(first, second)+A[i], swap(first, second);
        return max(first, second);
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N;
        cin >> N;
        vector<int> A(N);
        IntArray::input(A,N);

        Solution obj;
        long long res = obj.findMaxSubsetSum(N, A);
        cout << res << endl;
    }
    return 0;
}