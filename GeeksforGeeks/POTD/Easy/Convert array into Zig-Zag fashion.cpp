// 09 June 2024

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void zigZag(int n, vector<int> &arr) {
        // code here
        bool flag = true;
        for(int i = 1; i < n; i++) {
            if(flag && arr[i-1] > arr[i]) swap(arr[i], arr[i-1]);
            else if(!flag && arr[i-1] < arr[i]) swap(arr[i], arr[i-1]);
            flag = !flag;
        }
    }
};