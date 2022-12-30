// Dance Moves
// Problem Code - DANCEMOVES

// https://www.codechef.com/problems/DANCEMOVES

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        int count = 0;
        while(x != y) {
            if(x > y)
                x--;
            else
                x += 2;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}