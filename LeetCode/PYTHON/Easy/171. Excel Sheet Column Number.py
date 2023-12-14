# Problem Link:
# https://leetcode.com/problems/excel-sheet-column-number/

# Solution:
class Solution:
    def titleToNumber(self, columnTitle: str) -> int:
        ans = 0
        size = len(columnTitle) - 1
        for ch in columnTitle:
            value = ord(ch) - 64
            if size > 0:
                ans += value*pow(26, size)
                size -= 1
            else:
                ans += value
        return ans