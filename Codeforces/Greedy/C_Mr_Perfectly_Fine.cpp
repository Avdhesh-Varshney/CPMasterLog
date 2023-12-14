#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int solve() {
    int n;
    cin >> n;
    int minutes, skill1 = INT_MAX, skill2 = INT_MAX, ans = INT_MAX;
    string s;
    for(int i = 0; i < n; i++) {
        cin >> minutes >> s;
        if(s == "11") ans = min(ans, minutes);
        if(s == "10") skill1 = min(minutes, skill1);
        if(s == "01") skill2 = min(minutes, skill2);
    }
    if(ans != INT_MAX) {
        if(skill1 != INT_MAX && skill2 != INT_MAX) return min(ans, skill1+skill2);
        else return ans;
    }
    else if(skill1 != INT_MAX && skill2 != INT_MAX) return skill1+skill2;
    return -1;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << endl;
    }
    return 0;
}