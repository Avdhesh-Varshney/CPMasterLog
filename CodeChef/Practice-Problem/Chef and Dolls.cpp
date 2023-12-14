// Chef and Dolls
// Problem Code - MISSP

// https://www.codechef.com/problems/MISSP

// Solution:
#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int a[n], num;
	    for(int i = 0; i < n; i++)
	        cin >> a[i];
	    for(int i = 0; i < n; i++) {
	        int count = 0;
	        for(int j = 0; j < n; j++) {
	            if(a[i] == a[j])
	                count++;
	        }
	        if(count%2 != 0) {
	            cout << a[i] << endl;
	            break;
	        }
	    }
	}
	return 0;
}