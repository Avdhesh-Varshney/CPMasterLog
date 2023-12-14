// 13 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int> res;
	    sort(arr, arr+n, greater<int>());
	    for(int i = 0; i < k; i++) res.emplace_back(arr[i]);
	    return res;
	}

};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for(auto &x : ans) cout << x << " ";
        cout << endl;
    }
    return 0;
}