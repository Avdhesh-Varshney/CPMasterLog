#include <bits/stdc++.h>
using namespace std;

bool verify(int puzzle) {
    int root = sqrt(puzzle);
    return root * root == puzzle && root % 2 == 1;
}

int main() {
    int t, n, temp;
    cin >> t;
    while(t--) {
        cin >> n;
        int happyDays = 0, puzzle = 0;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            puzzle += temp;
            if(verify(puzzle)) ++happyDays;
        }
        cout << happyDays << endl;
    }
    return 0;
}