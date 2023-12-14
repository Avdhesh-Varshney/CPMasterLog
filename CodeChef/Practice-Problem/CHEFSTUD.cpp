// Chef and his Students
// Problem Code - CHEFSTUD

// https://www.codechef.com/problems/CHEFSTUD

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	string s;
	cin >> t;
	while(t--) {
	    cin >> s;
	    for(int i = 0; s[i] != '\0'; i++) {
	        if(s[i] == '>')
	            s[i] = '<';
	        else if(s[i] == '<')
	            s[i] = '>';
	    }
	    int count = 0;
	    for(int i = 1; s[i] != '\0'; i++) {
	        if(s[i-1] == '>' and s[i] == '<')
	            count++;
	    }
	    cout << count << endl;
	}
	return 0;
}