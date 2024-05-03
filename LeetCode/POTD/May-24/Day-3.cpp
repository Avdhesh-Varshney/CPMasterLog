// https://leetcode.com/problems/compare-version-numbers/?envType=daily-question&envId=2024-05-03

class Solution {
public:
    void convert(string& v, vector<long long>& x) {
        string str = "";
        int n = v.length();
        for(int i = 0; i < n; i++) {
            if(v[i] == '.') {
                x.emplace_back(stoll(str));
                str = "";
            } else str += v[i];
        }
        if(str != "") x.emplace_back(stoll(str));
    }
    int compareVersion(string v1, string v2) {
        vector<long long> x1, x2;
        convert(v1, x1);
        convert(v2, x2);
        int n1 = x1.size(), n2 = x2.size(), i = 0;
        while(i < min(n1, n2)) {
            if(x1[i] > x2[i]) return 1;
            else if(x1[i] < x2[i]) return -1;
            ++i;
        }
        if(i > 0) {
            while(i < n1) {
                if(x1[i] > 0) return 1;
                ++i;
            }
            while(i < n2) {
                if(x2[i] > 0) return -1;
                ++i;
            }
        }
        return 0;
    }
};