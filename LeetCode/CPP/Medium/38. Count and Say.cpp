// Problem Link
// https://leetcode.com/problems/count-and-say/

// Solution:
class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)
            return "1";
        string result = "1";
        for(int i = 2; i <= n; i++) {
            char previous = result[0];
            string temp = "";
            int count = 1;
            for(int j = 1; j <= result.length(); j++) {
                if(result[j] != previous) {
                    temp = temp + to_string(count) + previous;
                    previous = result[j];
                    count = 1;
                }
                else
                    count++;
            }
            result = temp;
        }
        return result;
    }
};