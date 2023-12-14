// A Good Set
// Problem Code - GOODSET

// https://www.codechef.com/problems/GOODSET

// Solution:
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
		int arr[101], k = 1, j = 500;
		for(int i = 0; i < n; i += 2) {
			arr[i] = k+2;
			arr[i+1] = j-2;
			k += 2;
			j -= 2;
		}
		for(int i = 0; i < n; i++)
			cout << arr[i] << ' ';
        cout << endl;
    }
    return 0;
}