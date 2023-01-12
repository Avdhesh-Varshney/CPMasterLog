// Make all equal using Pairs
// Problem Code - PAIREQ

// https://www.codechef.com/problems/PAIREQ

// Solution:
#include <iostream>
using namespace std;
int count_repeat(int a[], int n){
    int max_freq = 0, most_freq = -1;
    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = 0; j < n; j++) {
            if(a[i] == a[j])
                count++;
        }
        if(max_freq < count) {
            max_freq = count;
            most_freq = a[i];
        }
        else if(max_freq == count)
            most_freq = min(most_freq, a[i]);
    }
    return most_freq;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, count = 0;
	    cin >> n;
	    int a[n];
	    for(int j = 0; j < n; j++)
	        cin >> a[j];
	    int num = count_repeat(a, n);
	    for(int k = 0; k < n; k++) {
	        if(num != a[k]) {
	            a[k] = num;
	            count++;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}