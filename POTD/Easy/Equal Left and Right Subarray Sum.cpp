// 06 April 2023

#include <bits/stdc++.h>
using namespace std;

class Array {
    public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for(int i = 0; i < n; i++)
            scanf("%d", &A[i]);
    }
    template <class T>
    static void print(vector<T> &A) {
        for(int i = 0; i < A.size(); i++)
            cout << A[i] << " ";
        cout << endl;
    }
};

class Solution {
    public:
    int equalSum(int N, vector<int> &A) {
        // code here
        int right = 0, left = 0, ans = -1;
        for(int i = 0; i < N; i++) right += A[i];
        for(int i = 0; i < N; i++) {
            right -= A[i];
            if(left == right) {
                ans = i+1;
                break;
            }
            left += A[i];
        }
        return ans;
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
        int res = obj.equalSum(N, A);
        cout << res << endl;
    }
    return 0;
}