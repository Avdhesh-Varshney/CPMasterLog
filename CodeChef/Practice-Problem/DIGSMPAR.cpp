// Digit Sum Parities
// Problem Code - DIGSMPAR

// https://www.codechef.com/problems/DIGSMPAR

// Solution:
#include <iostream>
using namespace std;
int digitSum(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int i = n+1, num;
        int sum = digitSum(n);
        if(sum%2 == 0) {
            while(i > n) {
                int s = digitSum(i);
                if(s%2 != 0) {
                    num = i;
                    break;
                }
                i++;
            }
        }
        else {
            while(i > n) {
                int s = digitSum(i);
                if(s%2 == 0) {
                    num = i;
                    break;
                }
                i++;
            }
        }
        cout << num << endl;
    }
    return 0;
}