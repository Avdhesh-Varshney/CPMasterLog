// Problem Link
// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

// Solution:
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() > haystack.size())
            return -1;
        else if(needle == haystack)
            return 0;
        int h = haystack.size(), n = needle.size();
        for(int i = 0; i < h-n+1; i++)
            if(haystack.substr(i, n) == needle)
                return i;
        return -1;
    }
};