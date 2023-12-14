#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, cntO = 0, cntA = 0, temp, tempO = 0, tempA = 0;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            if(temp != 0) tempO++;
            else {
                cntO = max(cntO, tempO);
                tempO = 0;
            }
        }
        cntO = max(cntO, tempO);
        for(int i = 0; i < n; i++) {
            cin >> temp;
            if(temp != 0) tempA++;
            else {
                cntA = max(cntA, tempA);
                tempA = 0;
            }
        }
        cntA = max(cntA, tempA);
        if(cntA > cntO) cout << "Addy" << endl;
        else if(cntA == cntO) cout << "Draw" << endl;
        else cout << "Om" << endl;
    }
    return 0;
}