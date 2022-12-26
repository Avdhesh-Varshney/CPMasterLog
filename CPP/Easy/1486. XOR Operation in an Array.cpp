// Problem Link:
// https://leetcode.com/problems/xor-operation-in-an-array/

// Solution:
class Solution {
public:
    int xorarray(int n, int arr[]) {
        int xorval = 0;
        for(int i = 0; i < n; i++)
            xorval = xorval ^ arr[i];
        return xorval;
    }
    int xorOperation(int n, int start) {
        int arr[n];
        for(int i = 0; i < n; i++)
            arr[i] = start + 2*(i);
        return xorarray(n, arr);
    }
};