# Problem Link:
# https://leetcode.com/problems/first-letter-to-appear-twice/

# Solution:
class Solution:
    def repeatedCharacter(self, s: str) -> str:
        occ = defaultdict(int)
        for char in s:
            occ[char] += 1
            if(occ[char] == 2):
                return char