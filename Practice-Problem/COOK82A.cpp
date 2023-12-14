// La Liga
// Problem Code - COOK82A

// https://www.codechef.com/problems/COOK82A

// Solution:
#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string, int> dict;
	int t, a;
	string str;
	cin >> t;
	while(t--) {
	    for(int i = 0; i < 4; i++) {
	        cin >> str >> a;
	        dict[str] = a;
	    }
	    if((dict["Malaga"] > dict["RealMadrid"]) and (dict["Barcelona"] > dict["Eibar"]))
	        cout << "Barcelona" << endl;
	    else
	        cout << "RealMadrid" << endl;
	}
	return 0;
}