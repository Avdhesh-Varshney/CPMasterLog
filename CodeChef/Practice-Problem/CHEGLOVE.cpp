// Chef and Glove
// Problem Code - CHEGLOVE

// https://www.codechef.com/problems/CHEGLOVE

// Solution:
#include <iostream>
using namespace std;
void glove(int n, int l[], int g[]) {
    int x[n];
    for(int i = 0; i < n; i++) {
        x[i] = g[n-i-1];
    }
    int front = 1, back = 1;
    for(int i = 0; i < n; i++) {
        if(l[i] > g[i])
            front = 0;
        if(l[i] > x[i])
            back = 0;
    }
    if(front == 1 and back == 1)
        cout << "both" << endl;
    else if(front == 1 and back == 0)
        cout << "front" << endl;
    else if(front == 0 and back == 1)
        cout << "back" << endl;
    else
        cout << "none" << endl;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int l[n], g[n];
        for(int i = 0; i < n; i++)
            cin >> l[i];
        for(int i = 0; i < n; i++)
            cin >> g[i];
        glove(n, l, g);
    }
    return 0;
}