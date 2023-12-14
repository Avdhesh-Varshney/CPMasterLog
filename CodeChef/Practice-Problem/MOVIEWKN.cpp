// Movie Weekend
// Problem Code - MOVIEWKN

// https://www.codechef.com/problems/MOVIEWKN

// Solution:
#include <iostream>
#include <vector>
using namespace std;
int movie(int n, int l[], int r[]) {
    int large = -1, count = 0, index = -1;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int temp = l[i]*r[i];
        if(large <= temp) {
            large = temp;
            count++;
            index = i+1;
            v.push_back(r[i]);
        }
    }
    if(count == 1)
        return index;
    else {
        int lar = -1, cou = 0;
        for(int i = 0; i < v.size(); i++) {
            if(lar <= v[i]) {
                lar = v[i];
                cou++;
            }
        }
        for(int i = 0; i < n; i++) {
            if(lar == r[i])
                return (i+1);
        }
    }
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int l[n], r[n], mul[n];
        for(int i = 0; i < n; i++)
            cin >> l[i];
        for(int i = 0; i < n; i++)
            cin >> r[i];
        int index = movie(n, l, r);
        cout << index << endl;
    }
    return 0;
}