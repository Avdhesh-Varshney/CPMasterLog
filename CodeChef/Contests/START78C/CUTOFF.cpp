#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    ll n, x;
	    cin >> n >> x;
	    vector<ll> v(n);
	    for(ll i = 0; i < n; i++)
	        cin >> v[i];
	    sort(v.begin(), v.end(), greater<int>());
	    cout << v[x-1] -1 << endl;
	}
	return 0;
}
