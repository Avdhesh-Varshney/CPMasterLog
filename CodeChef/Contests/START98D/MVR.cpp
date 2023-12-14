#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int messi = 2*a + b;
    int rona = 2*x + y;
    if(messi > rona) cout << "Messi" << endl;
    else if(rona > messi) cout << "Ronaldo" << endl;
    else cout << "Equal" << endl;
    return 0;
}