// Ciel and Receipt
// Problem Code - CIELRCPT

// https://www.codechef.com/problems/CIELRCPT

// Solution:
#include <iostream>
using namespace std;
int main() {
	int t, p;
	cin >> t;
	while(t--) {
	    cin >> p;
	    int count = 0;
	    while(p > 0) {
    	    if(p >= 2048) {
    	        count += p / 2048;
    	        p %= 2048;
    	    }
    	    else if(p >= 1024) {
    	        count += p/1024;
    	        p %= 1024;
    	    }
    	    else if(p >= 512) {
    	        count += p/512;
    	        p %= 512;
    	    }
    	    else if(p >= 256) {
    	        count += p/256;
    	        p %= 256;
    	    }
    	    else if(p >= 128) {
    	        count += p/128;
    	        p %= 128;
    	    }
    	    else if(p >= 64) {
    	        count += p/64;
    	        p %= 64;
    	    }
    	    else if(p >= 32) {
    	        count += p/32;
    	        p %= 32;
    	    }
    	    else if(p >= 16) {
    	        count += p/16;
    	        p %= 16;
    	    }
    	    else if(p >= 8) {
    	        count += p/8;
    	        p %= 8;
    	    }
    	    else if(p >= 4) {
    	        count += p/4;
    	        p %= 4;
    	    }
    	    else if(p >= 2) {
    	        count += p/2;
    	        p %= 2;
    	    }
    	    else {
    	        count += p/1;
    	        p %= 1;
    	    }
	    }
	    cout << count << endl;
	}
	return 0;
}