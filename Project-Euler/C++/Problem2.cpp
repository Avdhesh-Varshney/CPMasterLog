#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        long long f = 1, s = 2, sum = 0;
        while(s <= n) {
            if(s%2 == 0)
                sum += s;
            s = f+s;
            f = s-f;
        }
        cout << sum << endl;
    }
    return 0;
}
