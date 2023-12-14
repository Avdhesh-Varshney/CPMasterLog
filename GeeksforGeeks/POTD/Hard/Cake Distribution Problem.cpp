// 02 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxSweetness(vector<int>& a, int n, int k) {
        // Write your code here.
        int l = 1;
        int h = 0;
        for(int i = 0; i < n; i++) h += a[i];
        while(l <= h) {
            int mid = l + (h-l)/2;
            int piece = 0, sweet = 0;
            for(int i = 0; i < n; i++) {
                sweet += a[i];
                if(sweet >= mid) {
                    piece++;
                    sweet = 0;
                }
            }
            if(piece < k+1) h = mid  - 1;
            else l = mid+1;
        }
        
        return h;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> sweetness(n);
        for(int i = 0; i < n; i++)
            cin >> sweetness[i];
        Solution ob;
        int res = ob.maxSweetness(sweetness, n, k);
        cout << res << endl;
    }
    return 0;
}