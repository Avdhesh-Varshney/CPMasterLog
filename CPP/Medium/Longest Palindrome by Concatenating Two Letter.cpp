// Problem Link:
// https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/

// Solution:
class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> m;
        for (const string& word : words)
            m[word]++;
        int ans = 0;
        bool flag = false;
        for (const auto& [word, count] : m) {
            if (word[0] == word[1]) {
                if (count % 2 == 0) {
                    ans += count;
                }
                else {
                    ans += count - 1;
                    flag = true;
                }
            }
            else if (word[0] < word[1] && m.count({word[1], word[0]}))
                ans += 2 * min(count, m[{word[1], word[0]}]);
        }
        if(flag)
            ans++;
        return 2*ans;
    }
};