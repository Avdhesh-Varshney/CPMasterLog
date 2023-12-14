// Peak Finding
// Problem Code - UWCOI20A

// https://www.codechef.com/problems/UWCOI20A

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
        int h[n];
        for(int i = 0; i < n; i++)
            cin >> h[i];
        int large = h[0];
        for(int i = 0; i < n; i++) {
            if(large < h[i])
                large = h[i];
        }
        cout << large << endl;
    }
    return 0;
}