// Chef and Card Game
// Problem Code - CRDGAME

// https://www.codechef.com/problems/CRDGAME

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
        int a[n], b[n];
        int chef = 0, morty = 0;
        for(int i = 0; i < n; i++)
            cin >> a[i] >> b[i];
        for(int i = 0; i < n; i++) {
            int suma = 0;
            while(a[i] > 0) {
                suma += a[i]%10;
                a[i] /= 10;
            }
            int sumb = 0;
            while(b[i] > 0) {
                sumb += b[i]%10;
                b[i] /= 10;
            }
            if(suma == sumb) {
                chef++;
                morty++;
            }
            else if(sumb > suma)
                morty++;
            else
                chef++;
        }
        if(chef == morty)
            cout << "2 " << chef << endl;
        else if(chef > morty)
            cout << "0 " << chef << endl;
        else
            cout << "1 " << morty << endl;
    }
    return 0;
}