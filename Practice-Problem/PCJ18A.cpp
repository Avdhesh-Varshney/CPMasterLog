// Chef and Secret Ingredient
// Problem Code - PCJ18A

// https://www.codechef.com/problems/PCJ18A

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, x, temp, count = 0;
        cin >> n >> x;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            if(temp >= x)
                count++;
        }
        if(count >= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}