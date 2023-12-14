#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	vector<string> str(n);
	string ans = "";
	for(int i = 0; i < n; i++) cin >> str[i];
	unordered_map<string, int> m;
	for(int i = n-1; i >= 0; i--) {
	    if(m.find(str[i]) == m.end()) {
	        ans += str[i][str[i].size()-2];
	        ans += str[i][str[i].size()-1];
	    }
	    m[str[i]]++;
	}
	cout << ans << endl;
	return 0;
}