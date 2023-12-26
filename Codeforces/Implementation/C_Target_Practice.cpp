#include <iostream>
#include <vector>
using namespace std;
const vector<vector<int>> flag = {{1,1,1,1,1,1,1,1,1,1},
                                {1,2,2,2,2,2,2,2,2,1},
                                {1,2,3,3,3,3,3,3,2,1},
                                {1,2,3,4,4,4,4,3,2,1},
                                {1,2,3,4,5,5,4,3,2,1},
                                {1,2,3,4,5,5,4,3,2,1},
                                {1,2,3,4,4,4,4,3,2,1},
                                {1,2,3,3,3,3,3,3,2,1},
                                {1,2,2,2,2,2,2,2,2,1},
                                {1,1,1,1,1,1,1,1,1,1}};
int main() {
    int t;
    char ch;
    cin >> t;
    while(t--) {
        int score = 0;
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                cin >> ch;
                if(ch == 'X') score += flag[i][j];
            }
        }
        cout << score << endl;
    }
    return 0;
}