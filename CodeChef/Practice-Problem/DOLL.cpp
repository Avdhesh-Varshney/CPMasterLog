// Red Light, Green Light
// Problem Code - DOLL

// https://www.codechef.com/problems/DOLL

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, k, count = 0;
	    cin >> n >> k;
	    int arr[n];
	    for(int j = 0; j < n; j++)
	        cin >> arr[j];
	    for(int l = 0; l < n; l++) {
	        if(arr[l] > k)
	            count++;
	    }
	    cout << count << endl;
	}
	return 0;
}