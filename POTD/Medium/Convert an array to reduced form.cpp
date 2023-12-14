// 24 January 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    // code here
	    int a[n], j = 0;
	    for(int i = 0; i < n; i++)
	        a[i] = arr[i];
	    sort(a, a+n);
	    map<int, int> mp;
	    for(int i = 0; i < n; i++)
	        mp.insert({a[i], i});
	    while(j < n) {
	        auto itr = mp.find(arr[j]);
	        arr[j] = itr->second;
	        j++;
	    }
	}
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        ob.convert(arr, n);
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
