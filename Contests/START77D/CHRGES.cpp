#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        vector<int> v;
        for(int i = 0; i < n; i++) {
            if(s[i] != '0')
                v.push_back(i);
        }
        if(v.size() == 1)
            cout << 0 << endl;
        else if(v.size() == 0)
            cout << n << endl;
        else {
            int count = 0;
            for(int i = 0; i < v.size()-1; i++) {
                if(s[v[i]] != s[v[i+1]]) {
                    int x = v[i+1]-v[i]-1;
                    if(x%2 != 0)
                        count += 1;
                }
            }
            cout << count << endl;
        }
    }
	return 0;
}
