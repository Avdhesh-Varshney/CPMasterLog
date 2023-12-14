// Average Flex
// Problem Code - AVGFLEX

// https://www.codechef.com/problems/AVGFLEX

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n; 
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int count = 0;
        for(int i = 0; i < n; i++) {
            int countl = 0, counts = 0;
            for(int j = 0; j < n; j++) {
                if(a[i] >= a[j])
                    counts++;
                if(a[i] < a[j])
                    countl++;
            }
            if(counts > countl)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}