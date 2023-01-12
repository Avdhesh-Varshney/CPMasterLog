// The Wave
// Problem Code - WAV2

// https://www.codechef.com/problems/WAV2

// Solution:
#include <iostream>
#include <algorithm>
using namespace std;
int binsearch(int x, int n, int a[]) {
    int l = 0, h = n-1, mid;
    while(l <= h) {
        mid = (l+h)/2;
        if(a[mid] == x)
            break;
        else if(a[mid] > x)
            h = mid-1;
        else
            l = mid+1;
    }
    return mid;
}
int main() {
    // your code goes here
    int n, q;
    cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    while(q--) {
        int x;
        cin >> x;
        int res = binsearch(x, n, a);
        if(a[res] == x)
            cout << "0" << endl;
        else {
            if(a[res] > x) {
                if((n-res)%2 == 0)   
                    cout << "POSITIVE" << endl;
                else
                    cout << "NEGATIVE" << endl;
            }
            else {
                if((n-res+1)%2 == 0)
                    cout << "POSITIVE" << endl;
                else
                    cout << "NEGATIVE" << endl;
            }
        }
    }
    return 0;
}