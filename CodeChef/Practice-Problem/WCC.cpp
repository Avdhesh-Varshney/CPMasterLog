// World Chess Championship
// Problem Code - WCC

// https://www.codechef.com/problems/WCC

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, x;
	string s;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> x >> s;
	    int count_c = 0, count_d = 0, count_chef = 0;
	    for(int j = 0; j < 14; j++) {
	        if(s[j] == 'C')
	            count_c++;
	        else if(s[j] == 'D')
	            count_d++;
	        else
	            count_chef++;
	    }
	    if((2*count_c + count_d) > (2*count_chef + count_d))
	        cout << 60*x << endl;
	    else if((2*count_c + count_d) == (2*count_chef + count_d))
	        cout << 55*x << endl;
	    else
	        cout << 40*x << endl;
	}
	return 0;
}