// 16 January 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // Your code here
        stack<long long> s;
        vector<long long> v1;
        for(int i = n-1; i >= 0; i--) {
            if(s.size() == 0) {
                 v1.push_back(-1);
                 s.push(arr[i]);
            }
            else if(s.top() > arr[i]) {
                v1.push_back(s.top());
                s.push(arr[i]);
            }
            else if(s.top() <= arr[i]){
                while(s.size() != 0 && s.top() < arr[i]) {
                    s.pop();
                }
                if(s.size() == 0) {
                    v1.push_back(-1);
                    s.push(arr[i]);
                }
                else if(s.top() > arr[i]) {
                     v1.push_back(s.top());
                     s.push(arr[i]);
                }
            }
        }
        vector<long long>v2;
        int k = v1.size();
        for(int m = k-1; m >= 0; m--) {
            v2.push_back( v1.at(m));
        }
        return v2;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        vector<long long> res = ob.nextLargerElement(arr, n);
        for(long long i : res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
