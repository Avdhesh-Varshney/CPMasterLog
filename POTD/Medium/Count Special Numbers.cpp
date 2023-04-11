// 05 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> arr) {
        // Code here
        sort(arr.begin(), arr.end());
        unordered_set<int> m;
        int ans = 0, n = arr.size();
        for(int i = 0; i < n; i++) {
            if(m.find(arr[i]) != m.end()) ans++;
            else {
                if(i+1 < n && arr[i] == arr[i+1]) ans++;
                int k = arr[i];
                for(int j = arr[i]; j <= arr[n-1]; j += k) m.insert(j);
            }
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
        vector<int> arr(N);
        for(int i = 0; i < N; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}