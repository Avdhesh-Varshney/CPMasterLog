// 13 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    typedef long long ll;
    vector<ll> pre;
    vector<ll> minMax(int l, int r) {
        int low = l, high = r-1;
        ll mn = 0, mx = pre[r] - pre[l-1];
        while(low <= high){
           int mid = low + (high-low)/2;
           ll leftSum = pre[mid] - pre[l-1], rightSum = pre[r] - pre[mid];
           if(abs(rightSum - leftSum) < mx-mn){
               mn = min(leftSum,rightSum);
               mx = max(leftSum,rightSum);
           }
           if(leftSum < rightSum) low = mid + 1;
           else high = mid- 1;
        };
        return {mn, mx};
    }
    long long minDifference(int N, vector<int> &A) {
        // code here
        pre.resize(N+1);
        pre[0] = 0;
        for(int i = 1; i <= N; i++)
            pre[i] = pre[i-1] + A[i-1];
        long long ans = pre.back();
        for(int i = 1; i < N-2; i++) {
            vector<ll> l = minMax(1,i+1), r = minMax(i+2,N);
            ans = min({ans, max(l[1],r[1]) - min(l[0], r[0])});
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
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        long long ans = ob.minDifference(n, a);
        cout << ans << endl;
    }
    return 0;
}