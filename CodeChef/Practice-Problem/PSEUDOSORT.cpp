// Pseudo Sorted Array
// Problem Code - PSEUDOSORT

// https://www.codechef.com/problems/PSEUDOSORT

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int a[n], count = 0;
	    for(int i = 0; i < n; i++)
	        cin >> a[i];
	    for(int i = 0; i < n-1;) {
	        if(a[i] > a[i+1]) {
	            count++;
	            swap(a[i], a[i+1]);
	            break;
	        }
	        else {
	            i++;
	        }
	    }
	    int sum = 0;
	    for(int j = 0; j < n-1; j++) {
	        if(a[j] <= a[j+1])
	            sum++;
	    }
	    if(count <= 1 and sum == n-1)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}