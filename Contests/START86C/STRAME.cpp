#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        int count1 = 0, count0 = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '0') count1++;
            else count0++;
        }
        if(min(count1, count0)%2 == 0) cout << "Ramos" << endl;
        else cout << "Zlatan" << endl;
    }
    return 0;
}