// 19 March 2023

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
    vector<int> getDistinctDifference(int N, vector<int> &A) {
        // code here
        vector<int> ans;
        unordered_map<int, int> left, right;
        for(int i = 1; i < N; i++)
            right[A[i]]++;
        ans.push_back(left.size() - right.size());
        for(int i = 1; i < N; i++) {
            left[A[i-1]]++;
            if(right[A[i]] > 0)
                right[A[i]]--;
            if(right[A[i]] == 0)
                right.erase(A[i]);
            ans.push_back(left.size() - right.size());
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
        vector<int> res = obj.getDistinctDifference(N, A);
        Array::print(res);
    }
    return 0;
}