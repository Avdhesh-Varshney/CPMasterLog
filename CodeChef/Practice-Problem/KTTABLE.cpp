// Kitchen Timetable
// Problem Code - KTTABLE

// https://www.codechef.com/problems/KTTABLE

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
	    int a[n], b[n];
	    for(int i = 0; i < n; i++)
	        cin >> a[i];
	    for(int i = 0; i < n; i++)
	        cin >> b[i];
	    for(int j = n-1; j > 0; j--) {
	        a[j] = a[j] - a[j-1];
	    }
	    int count = 0; 
	    for(int k = 0; k < n; k++) {
	        if(a[k] >= b[k])
	            count++;
	    }
	    std::cout << count << std::endl;
	}
	return 0;
}