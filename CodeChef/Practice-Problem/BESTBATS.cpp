// Top Batsmen
// Problem Code - BESTBATS

// https://www.codechef.com/problems/BESTBATS

// Solution:
#include <iostream>
#include <algorithm>
using namespace std;
int fact(int n) {
    if(n == 0)
        return 1;
    return n*fact(n-1);
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int score[11], k, n = 0, r = 0;
        for(int i = 0; i < 11; i++)
            cin >> score[i];
        cin >> k;
        sort(score, score+11);
        int temp = score[11-k];
        for(int i = 0; i < 11; i++) {
            if(temp == score[i])
                n++;
            if(temp == score[i] and i < 11-k)
                r++;
        }
        cout << fact(n)/(fact(r)*fact(n-r)) << endl;
    }
    return 0;
}