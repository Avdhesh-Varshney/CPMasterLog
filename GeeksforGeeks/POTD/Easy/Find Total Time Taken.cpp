// 15 April 2023

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
    int totalTime(int n, vector<int> &arr, vector<int> &time) {
        // code here
        int t = 0;
        unordered_map<int, int> m;
        for(int i = 0; i < arr.size(); i++) {
            if(m.find(arr[i]) != m.end())
                t = max(t, m[arr[i]] + time[arr[i]-1]);
            m[arr[i]] = t;
            t++;
        }
        return t-1;
    }
};

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);

        vector<int> arr(n);
        Array::input(arr, n);

        vector<int> time(n);
        Array::input(time, n);

        Solution obj;
        int res = obj.totalTime(n, arr, time);
        cout << res << endl;
    }
    return 0;
}