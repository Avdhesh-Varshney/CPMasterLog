// 07 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int addMinChar(string str){    
        //code here
        int st = 0, lt = str.length()-1, ans = lt;
        while(st < str.length() and st < lt) {
            if(str[st] == str[lt]) {
                st++;
                lt--;
            }
            else {
                st = 0;
                ans--;
                lt = ans;
            }
        }
        return str.length()-ans-1;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0;
}