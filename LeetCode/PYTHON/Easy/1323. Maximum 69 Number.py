# Problem Link:
# https://leetcode.com/problems/maximum-69-number/

# Solution:
class Solution:
    def maximum69Number (self, num: int) -> int:
        temp = 0
        six = -1
        n = num
        while n:
            if n % 10 == 6:
                six = temp
            n //= 10
            temp += 1
        return num if six == -1 else num + 3 * 10 ** six