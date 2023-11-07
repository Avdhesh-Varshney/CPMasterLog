#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, n , temp;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> b, c;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            b.push_back(temp);
        }
        sort(b.begin(), b.end());
        for(int i = b.size()-1; i >= 0; i--) {
            bool flag = false;
            for(int j = i-1; j >= 0; j--)
                if(b[j]%b[i] != 0) flag = true;
            if(flag) {
                c.push_back(b[i]);
                b.pop_back();
            }
        }
        if(b.size() == 0 || c.size() == 0) cout << -1 << endl;
        else {
            cout << b.size() << " " << c.size() << endl;
            for(auto &i : b) cout << i << " ";
            cout << endl;
            sort(c.begin(), c.end());
            for(auto &i : c) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}