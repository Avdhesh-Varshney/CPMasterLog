// A-Books
// Problem Code : BIT2A

// https://www.codechef.com/problems/BIT2A

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
        int a[n], b[n] = {0};
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++) {
            int temp = 0;
            for(int j = i; j < n; j++) {
                if(a[j] > a[i])
                    temp++;
            }
            b[i] = temp;
        }
        for(int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
    return 0;
}