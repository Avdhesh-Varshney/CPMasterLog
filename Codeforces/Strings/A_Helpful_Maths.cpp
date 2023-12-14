#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '+')
            v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    s = "";
    for(int i = 0; i < v.size(); i++) {
        s.push_back(v[i]);
        s.push_back('+');
    }
    s.pop_back();
    cout << s << endl;
    return 0;
}