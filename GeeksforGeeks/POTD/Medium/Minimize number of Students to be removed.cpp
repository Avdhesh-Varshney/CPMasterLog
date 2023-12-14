// 3 January 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int helper(int H[], int N) {
        vector<int> temp;
        temp.push_back(H[0]);
        for(int i = 1; i < N; i++) {
            if(H[i] > temp.back())
                temp.push_back(H[i]);
            else {
                int a = lower_bound(temp.begin(), temp.end(), H[i]) - temp.begin();
                temp[a] = H[i];
            }
        }
        return temp.size();
    }
    int removeStudents(int H[], int N) {
        // code here
        int ans = helper(H, N);
        return N-ans;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N;
        cin >> N;
        int H[N];
        for(int i = 0; i < N; i++)
            cin >> H[i];
        Solution ob;
        cout << ob.removeStudents(H, N) << endl;
    }
    return 0;
}
