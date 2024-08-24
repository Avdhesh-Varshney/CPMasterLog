// 27 June 2024

bool isToepliz(vector<vector<int>>& mat) {
    // code here
    int n = mat.size(), m = mat[0].size();
    int i = 0;
    while(i < n) {
        int temp = i, j = 0;
        while(j < m && temp < n) {
            if(mat[temp][j] != mat[i][0]) return false;
            ++j;
            ++temp;
        }
        ++i;
    }
    int j = 1;
    while(j < m) {
        int temp = j, i = 0;
        while(i < n && temp < m) {
            if(mat[i][temp] != mat[0][j]) return false;
            ++i;
            ++temp;
        }
        ++j;
    }
    return true;
}