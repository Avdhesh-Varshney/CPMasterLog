// Days in Month
// Problem Code - NW1

// https://www.codechef.com/problems/NW1

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int w;
        string s;
        cin >> w >> s;
        if(w == 28)
            cout << "4 4 4 4 4 4 4" << endl;
        else if(w == 29) {
            if(s == "mon")
                cout << "5 4 4 4 4 4 4" << endl;
            else if(s == "tues")
                cout << "4 5 4 4 4 4 4" << endl;
            else if(s == "wed")
                cout << "4 4 5 4 4 4 4" << endl;
            else if(s == "thurs")
                cout << "4 4 4 5 4 4 4" << endl;
            else if(s == "fri")
                cout << "4 4 4 4 5 4 4" << endl;
            else if(s == "sat")
                cout << "4 4 4 4 4 5 4" << endl;
            else if(s == "sun")
                cout << "4 4 4 4 4 4 5" << endl;
        }
        else if(w == 30) {
            if(s == "mon")
                cout << "5 5 4 4 4 4 4" << endl;
            else if(s == "tues")
                cout << "4 5 5 4 4 4 4" << endl;
            else if(s == "wed")
                cout << "4 4 5 5 4 4 4" << endl;
            else if(s == "thurs")
                cout << "4 4 4 5 5 4 4" << endl;
            else if(s == "fri")
                cout << "4 4 4 4 5 5 4" << endl;
            else if(s == "sat")
                cout << "4 4 4 4 4 5 5" << endl;
            else if(s == "sun")
                cout << "5 4 4 4 4 4 5" << endl;
        }
        else if(w == 31) {
            if(s == "mon")
                cout << "5 5 5 4 4 4 4" << endl;
            else if(s == "tues")
                cout << "4 5 5 5 4 4 4" << endl;
            else if(s == "wed")
                cout << "4 4 5 5 5 4 4" << endl;
            else if(s == "thurs")
                cout << "4 4 4 5 5 5 4" << endl;
            else if(s == "fri")
                cout << "4 4 4 4 5 5 5" << endl;
            else if(s == "sat")
                cout << "5 4 4 4 4 5 5" << endl;
            else if(s == "sun")
                cout << "5 5 4 4 4 4 5" << endl;
        }
    }
    return 0;
}