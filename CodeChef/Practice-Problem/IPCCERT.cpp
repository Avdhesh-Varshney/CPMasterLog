// Chef and IPC Certificates
// Problem Code - IPCCERT

// https://www.codechef.com/problems/IPCCERT

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int n, m, k, count = 0;
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++) {
        int a[k+1], sum = 0;
        for(int j = 0; j < k+1; j++) {
            cin >> a[j];
        }
        for(int j = 0; j < k; j++) {
            sum += a[j];
        }
        if((sum >= m) and (a[k] <= 10))
            count++;
    }
    cout << count << endl;
    return 0;
}