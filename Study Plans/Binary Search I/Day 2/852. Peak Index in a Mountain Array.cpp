// Question 2

// Problem Link
// https://leetcode.com/problems/peak-index-in-a-mountain-array/

// Solution:
class Solution {
public:
    int solve(vector<int>& arr, int st, int lt) {
        if(st == lt || (st > 0 && (arr[st] > arr[st-1] && arr[st] > arr[st+1]))) return st;
        else if(lt+1 < arr.size() && arr[lt] > arr[lt-1] && arr[lt] > arr[lt+1]) return lt;
        int mid = (lt-st)/2 + st;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;
        else if(arr[mid] > arr[mid-1]) return solve(arr, mid+1, lt);
        return solve(arr, st, mid-1);
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return solve(arr, 0, arr.size()-1);
    }
};