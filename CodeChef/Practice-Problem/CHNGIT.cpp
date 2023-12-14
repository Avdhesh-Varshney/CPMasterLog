// Change it
// Problem Code - CHNGIT

// https://www.codechef.com/problems/CHNGIT

// Solution:
#include <iostream>
#include <vector>
using namespace std;
int freq(int a[], int n) {
    vector<bool> v(n, false);
    vector<int> b;
    for(int i = 0; i < n; i++) {
        if(v[i] == true)
            continue;
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(a[i] == a[j]) {
                v[i] = true;
                count++;
            }
        }
        b.push_back(count);
    }
    int large = -1;
    for(int i = 0; i < b.size(); i++) {
        if(large < b[i])
            large = b[i];
    }
    return (n-large);
}
int main() {
	// your code goes here
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int a[n], count = 0;
	    for(int i = 0; i < n; i++)
	        cin >> a[i];
	    cout << freq(a, n) << endl;
	}
	return 0;
}