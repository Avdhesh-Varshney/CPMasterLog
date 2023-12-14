#include <iostream>
using namespace std;

int main() {
    int t;
    char game[3][3];
    cin >> t;
    while(t--) {
        bool x = false, o = false, p = false;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) cin >> game[i][j];
            // Horizontal
            if(game[i][0] != '.' && game[i][0] == game[i][1] && game[i][1] == game[i][2]) {
                if(game[i][0] == 'X') x = true;
                else if(game[i][0] == 'O') o = true;
                else p = true;
            }
        }
        for(int j = 0; j < 3; j++) {
            // Vertical
            if(game[0][j] != '.' && game[0][j] == game[1][j] && game[1][j] == game[2][j]) {
                if(game[0][j] == 'X') x = true;
                else if(game[0][j] == 'O') o = true;
                else p = true;
            }
        }
        // Right diagonal
        if(game[0][0] == game[1][1] && game[1][1] == game[2][2]) {
            if(game[1][1] == 'X') x = true;
            else if(game[1][1] == 'O') o = true;
            else if(game[1][1] == '+') p = true;
        }
        // Left diagonal
        if(game[0][2] == game[1][1] && game[1][1] == game[2][0]) {
            if(game[1][1] == 'X') x = true;
            else if(game[1][1] == 'O') o = true;
            else if(game[1][1] == '+') p = true;
        }
        if(x) {
            if(o) cout << "DRAW" << endl;
            else if(p) cout << "DRAW" << endl;
            else cout << "X" << endl;
        } else if(o) {
            if(p) cout << "DRAW" << endl;
            else cout << "O" << endl;
        } else if(p) cout << "+" << endl;
        else cout << "DRAW" << endl;
    }
    return 0;
}