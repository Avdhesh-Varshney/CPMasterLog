// 22 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
   long long rp(int X, int Y, string S) {
        stack<char> sk;
        long long int ans = 0;
        string temp = "";
        for(int i = 0; i < (int)S.size(); ++i) {
            if(S[i] != 'p') {
                sk.push(S[i]);
                temp.push_back(S[i]);
            }
            else {
                if(!sk.empty() and sk.top() == 'r') {
                    ans += Y;
                    sk.pop();
                    temp.pop_back();
                }
                else {
                    sk.push(S[i]);
                    temp.push_back(S[i]);
                }
            }
        }
        while(!sk.empty())
            sk.pop();
        for(int i = 0; i < (int)temp.size(); ++i) {
            if(temp[i] != 'r')
                sk.push(temp[i]);
            else {
                if(!sk.empty() and sk.top() == 'p') {
                    ans += X;
                    sk.pop();
                }
                else
                    sk.push(temp[i]);
            }
        }
        return ans;
    }
    long long pr(int X, int Y, string S) {
        stack<char> sk;
        long long int ans = 0;
        string temp = "";
        for(int i = 0; i < (int)S.size(); ++i) {
            if(S[i] != 'r') {
                sk.push(S[i]);
                temp.push_back(S[i]);
            }
            else {
                if(!sk.empty() and sk.top() == 'p') {
                    ans += X;
                    sk.pop();
                    temp.pop_back();
                }
                else {
                    sk.push(S[i]);
                    temp.push_back(S[i]);
                }
            }
        }
        while(!sk.empty())
            sk.pop();
        for(int i = 0; i < (int)temp.size(); ++i) {
            if(temp[i] != 'p')
                sk.push(temp[i]);
            else {
                if(!sk.empty() and sk.top() == 'r') {
                    ans += Y;
                    sk.pop();
                }
                else
                    sk.push(temp[i]);
            }
        }
        return ans;
    }
    long long solve(int X, int Y, string S) {
      //code here
        if(X >= Y)
            return pr(X, Y, S);
        return rp(X, Y, S);
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int X, Y;
        string S;
        cin >> X >> Y >> S;
        Solution obj;
        long long answer = obj.solve(X, Y, S);
        cout << answer << endl;
    }
    return 0;
}