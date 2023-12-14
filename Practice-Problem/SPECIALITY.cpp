// Speciality
// Problem Code - SPECIALITY

// https://www.codechef.com/problems/SPECIALITY

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x, y, z;
        cin >> x >> y >> z;
        if(x >= y and x >= z)
            cout << "Setter" << endl;
        else if(y >= x and y >= z)
            cout << "Tester" << endl;
        else if(z >= x and z >= y)
            cout << "Editorialist" << endl;
    }
    return 0;
}