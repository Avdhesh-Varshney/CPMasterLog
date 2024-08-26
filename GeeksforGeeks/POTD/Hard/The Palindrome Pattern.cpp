// 28 June 2024

class Solution {
  public:
    bool check(string& str) {
        int n = str.length();
        for(int i = 0; i < n/2; i++) if(str[i] != str[n-i-1]) return false;
        return true;
    }
    string pattern(vector<vector<int>> &arr) {
        // Code Here
        int n = arr.size();
        string ans = "";
        for(int i = 0; i < n && ans.length() == 0; i++) {
            string temp = "";
            for(int j = 0; j < n; j++) temp += to_string(arr[i][j]);
            if(check(temp)) {
                ans += to_string(i);
                ans += " R";
            }
        }
        for(int j = 0; j < n && ans.length() == 0; j++) {
            string temp = "";
            for(int i = 0; i < n; i++) temp += to_string(arr[i][j]);
            if(check(temp)) {
                ans += to_string(j);
                ans += " C";
            }
        }
        return ans.length() > 0? ans: "-1";
    }
};
