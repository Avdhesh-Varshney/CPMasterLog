// 31 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            // Code here
            int i = 0;
            while(i < n) {
                int j = i;
                while((a[j]+a[j+1])%2 == 0 and j < n-1)
                    j++;
                j++;
                sort(a.begin()+i, a.begin()+j, greater<int>());
                i = j;
            }
            return a;
        }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &j : a)
            cin >> j;
        Solution s;
        vector<int> b = s.lexicographicallyLargest(a, n);
        for(auto i : b)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}