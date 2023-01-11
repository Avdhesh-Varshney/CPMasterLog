// 11 January 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long int minIncrements(vector<int> arr, int N) {
        // Code here
        long long int  i, j, count = 0, max_val = 0;
        map<int, long long > m1;
        sort(arr.begin(), arr.end());
        for(i = 0; i < N; i++) {
            if(max_val<arr[i])
               max_val=arr[i];
            else {
                max_val++;
                count += max_val-arr[i];
            }
        }
        return count;
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
        Solution obj;
        cout << obj.minIncrements(arr, N) << endl;
    }
    return 0;
}
