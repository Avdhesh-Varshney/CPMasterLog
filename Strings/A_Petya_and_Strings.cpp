#include <iostream>
using namespace std;
int comp(string &a, string &b) {
    for(int i = 0; i < a.length(); i++) {
        if(tolower(a[i]) > tolower(b[i]))
            return 1;
        else if(tolower(a[i]) < tolower(b[i]))
            return -1;
    }
    return 0;
}
int main() {
    string a, b;
    cin >> a >> b;
    cout << comp(a, b) << endl;
    return 0;
}