#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int x, y, z;
    cin >> x >> y >> z;
    int my_score = x + (y/2);
    int opp_score = z + (y/2);
    int left_games = 4 - (x + y + z);
    if(my_score + left_games > opp_score) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}