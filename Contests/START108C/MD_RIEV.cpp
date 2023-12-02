#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> x = {{0, 1}, {0, 2}, {0, 3}, {0, 4}, {1, 4}, {1, 5}, {1, 6}, {1, 7}, {1, 8}, {1, 9}, {1, 10}};
    int t, n;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        if(n > 4) {
            cout<<1<<" "<<n-1<<endl;
        }
        else{
            cout<<0<<" "<<n<<endl;
        }
    }

    return 0;
}
