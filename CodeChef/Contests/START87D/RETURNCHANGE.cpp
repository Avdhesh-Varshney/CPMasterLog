#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        if(x%10 != 0) {
            if(x%10 >= 5) x = ((x/10)+1)*10;
            else x = (x/10)*10;
        }
        cout << 100-x << endl;
    }
    return 0;
}