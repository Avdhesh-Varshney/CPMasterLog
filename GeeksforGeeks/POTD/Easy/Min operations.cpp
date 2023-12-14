// 29 January 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int solve(int a, int b) {
        // code here
        if(a == b)
            return 0;
        int xval = a^b;
        if((a&xval) == 0 || (a&xval) == xval)
            return 1;
        return 2;
    }
};

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a;
        scanf("%d", &a);
        int b;
        scanf("%d", &b);
        Solution obj;
        int res = obj.solve(a, b);
        printf("%d\n", res);
    }
    return 0;
}
