// How Many Maximums
// Problem Code - HOWMANYMAX

// https://www.codechef.com/problems/HOWMANYMAX

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
        string a; 
        cin >> a; 
        int c = 1;
	    for(int i = 0; i < n -1; i++)
	        if(a[i] > a[i+1])
	            c++;
	    cout << c-1 << endl;
    }
    return 0;
}