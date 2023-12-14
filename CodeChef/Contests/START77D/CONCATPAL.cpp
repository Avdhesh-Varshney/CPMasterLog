#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n, m;
	    string s1, s2;
	    cin >> n >> m >> s1 >> s2;
	    int freq[128] = {0};
	    if(m > n) {
	        swap(m, n);
	        swap(s1, s2);
	    }
	    for(int i = 0; i < n; i++) {
	        freq[s1[i]]++;
	    }
	    for(int i = 0; i < m; i++) {
	        freq[s2[i]]--;
	    }
	    int flag = 1, count = 0, diff = n-m;
	    for(int i = 0; i < 128; i++) {
	        if(freq[i] < 0) {
	            flag = 0;
	            break;
	        }
	        if(freq[i]%2 == 0) {
	            continue;
	        }
	        if(count)
	            flag = 0;
	        else
	            count = 1;
	    }
	    if(flag)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
