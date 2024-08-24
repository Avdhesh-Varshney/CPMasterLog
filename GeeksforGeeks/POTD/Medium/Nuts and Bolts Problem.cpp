// 10 June 2024

class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        // code here
        vector<char> order = {'!', '#', '$', '%', '&', '*', '?', '@', '^'};
        vector<char> ans;
        for(int i = 0; i < n; i++) ans.emplace_back(nuts[i]);
        int i = 0;
        for(auto &ch: order) {
            auto it = find(ans.begin(), ans.end(), ch);
            if(it != ans.end()) {
                nuts[i] = *it;
                bolts[i++] = *it;
            }
        }
    }
};