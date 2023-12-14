#include <iostream>
using namespace std;
int find(int n, int a[], int odd, int even) {
    if(even == 1) {
        for(int i = 0; i < n; i++)
            if(a[i]%2 == 0)
                return i+1;
    }
    else {
        for(int i = 0; i < n; i++)
            if(a[i]%2 == 1)
                return i+1;
    }
}
int main() {
    int n;
    cin >> n;
    int a[n], odd = 0, even = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i]%2 == 0)
            even++;
        else
            odd++;
    }
    cout << find(n, a, odd, even) << endl;
    return 0;
}