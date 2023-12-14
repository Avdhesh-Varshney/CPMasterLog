#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int alice = 0, bob = 0, flagA = 1, flagB = 0;
        for(auto &ch : s) {
            if(ch == 'A' && flagA == 1) ++alice;
            else if(ch == 'A' && flagA == 0) {
                flagA = 1;
                flagB = 0;
            }
            else if(ch == 'B' && flagB == 1) ++bob;
            else if(ch == 'B' && flagB == 0) {
                flagB = 1;
                flagA = 0;
            }
        }
        cout << alice << " " << bob << endl;
    }
    return 0;
}