// 26 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        // Write your code here.
        for(int i = 0; i < m; i++) {
            if(seats[i] == 0) {
                if(i > 0 && seats[i-1] == 1) continue;
                if(i < m-1 && seats[i+1] == 1) continue;
                n--;
                seats[i] = 1;
            }
            if(n == 0) break;
        }
        if(n == 0) return true;
        return false;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for(int i = 0; i < m; i++)
            cin >> seats[i];
        
        Solution obj;
        if(obj.is_possible_to_get_seats(n, m, seats))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}