// That is my score!
// Problem Code - WATSCORE

// https://www.codechef.com/problems/WATSCORE

// Solution:
#include <iostream>
using namespace std;
void score(int n, int a[], int b[]) {
    int sum = 0;
    for(int i = 1; i < 9; i++) {
        int max = 0;
        for(int j = 0; j < n; j++) {
            if(a[j] == i) {
                if(max < b[j])
                    max = b[j];
            }
        }
        sum += max;
    }
    cout << sum << endl;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, count = 0;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
        }
        score(n, a, b);
    }
    return 0;
}