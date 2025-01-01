// https://leetcode.com/problems/find-unique-binary-string/description/?envType=daily-question&envId=2023-11-16

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        sort(nums.begin(), nums.end());
        int x = 0;
        for(auto &str : nums) {
            if(str2num(str) != x) break;
            ++x;
        }
        string str = bitset<16>(x).to_string();
        str.erase(str.begin(), str.begin()+(16 - nums[0].length()));
        return str;
    }
    int str2num(string& str) {
        int x = 0, cnt = 0;
        for(int i = str.length()-1; i >= 0; i--) {
            if(str[i] == '1') x += pow(2, cnt);
            ++cnt;
        }
        return x;
    }
};