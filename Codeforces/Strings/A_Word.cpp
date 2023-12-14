#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int lower = 0, caps = 0;
    for(auto &ch : s) {
        if(ch > 90) ++lower;
        else ++caps;
    }
    if(lower >= caps) {
        for(auto &ch : s) if(ch < 96) ch += 32;
    } else {
        for(auto &ch : s) if(ch > 96) ch -= 32;
    }
    cout << s << endl;
    return 0;
}