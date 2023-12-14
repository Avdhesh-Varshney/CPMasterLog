#include <iostream>
using namespace std;
int main() {
    int arr[5][5], row = 0, col = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 1) {
                row = i+1;
                col = j+1;
            }
        }
    }
    cout << abs(row-3) + abs(col-3) << endl;
    return 0;
}