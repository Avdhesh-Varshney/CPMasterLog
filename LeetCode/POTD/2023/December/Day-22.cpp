// https://leetcode.com/problems/maximum-score-after-splitting-a-string/description/?envType=daily-question&envId=2023-12-22

int maxScore(char* s) {
    int n = strlen(s), rightOne = 0;
    for(int i = 0; i < n; i++) if(s[i] == '1') ++rightOne;
    int rightZero = n - rightOne;
    int score = 0, leftZero = 0, leftOne = 0;
    for(int i = 0; i < n-1; i++) {
        if(s[i] == '1') {
            ++leftOne;
            --rightOne;
        } else {
            ++leftZero;
            --rightZero;
        }
        if(leftZero + rightOne > score) score = leftZero + rightOne;
    }
    return score;
}