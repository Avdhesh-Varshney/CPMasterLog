# Problem Link:
# https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

# Solution:
class Solution:
    def removeDuplicates(self, s: str) -> str:
        ans=[]
        for a in s:
            if(len(ans)>0 and ans[-1]==a):
                ans.pop()
            else:
                ans.append(a)
        return("".join(ans))