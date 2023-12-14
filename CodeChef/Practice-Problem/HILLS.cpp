// Jumping in the hills
// Problem Code - HILLS

// https://www.codechef.com/problems/HILLS

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, u, d;
        cin >> n >> u >> d;
        int h[n], index = 0, para = 1;
        for(int i = 0; i < n; i++)
            cin >> h[i];
        for(int i = 1; i < n; i++) {
            if(h[i-1] == h[i])
                index = i;
            else if(h[i-1] > h[i]) {
                if(h[i-1]-h[i] <= d)
                    index = i;
                else if(para == 1) {
                    para = 0;
                    index = i;
                }
                else
                    break;
            }
            else if(h[i-1] < h[i]) {
                if(h[i]-h[i-1] <= u)
                    index = i;
                else
                    break;
            }
        }
        cout << index+1 << endl;
    }
    return 0;
}