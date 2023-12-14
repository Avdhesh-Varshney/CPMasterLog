// Lucky Number Game
// Problem Code : HP18

// https://www.codechef.com/problems/HP18

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        int arr[n], alice = 0, bob = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i]%a == 0)
                bob++;
            else if(arr[i]%b == 0)
                alice++;
        }
        if(bob > alice)
            cout << "BOB" << endl;
        else
            cout << "ALICE" << endl;
    }
    return 0;
}