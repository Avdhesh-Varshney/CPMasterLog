// Chef and Cook-Off
// Problem Code - CCOOK

// https://www.codechef.com/problems/CCOOK

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int n, a[5];
	cin >> n;
	while(n--) {
	    int count = 0;
	    for(int i = 0; i < 5; i++)
	        cin >> a[i];
	    for(int i = 0; i < 5; i++) {
	        if(a[i] == 1)
	            count++;
	    }
	    if(count == 0)
	        cout << "Beginner" << endl;
	   else if(count == 1)
	        cout << "Junior Developer" << endl;
	   else if(count == 2)
	        cout << "Middle Developer" << endl;
	   else if(count == 3)
	        cout << "Senior Developer" << endl;
	   else if(count == 4)
	        cout << "Hacker" << endl;
	   else if(count == 5)
	        cout << "Jeff Dean" << endl;
	}
	return 0;
}