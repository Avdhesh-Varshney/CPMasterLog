// What is the largest prime factor of a given number N ?

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        while(n%2 == 0)
            n /= 2;
        if(n == 1)
            cout << 2 << "\n";
        else {
            for(long int i = 3; i <= sqrt(n); i += 2) {
                while (n%i == 0)
                    n /= i;
                if(n == 1)
                    cout << i << "\n";
            }
            if(n != 1)
                cout << n << "\n";
        }
    }
    return 0;
}
