// 07 June 2024

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int l[], int r[], int maxx) {

        // Your code here
        int pref[maxx+2] = { 0 };
        int ans = -1, mx = -1e9;
        for(int i = 0; i < n; i++) {
            pref[l[i]]++;
            pref[r[i]+1]--;
        }
        for(int i = 1; i <= maxx; i++) {
            pref[i] += pref[i-1];
            if(pref[i] > mx) {
                mx = pref[i];
                ans = i;
            }
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int l[n], r[n];
        for(int i = 0; i < n; i++) cin >> l[i];
        int maxx = 0;
        for(int i = 0; i < n; i++) {
            cin >> r[i];
            if(r[i] > maxx) {
                maxx = r[i];
            }
        }
        Solution ob;
        cout << ob.maxOccured(n, l, r, maxx) << endl;
    }
    return 0;
}