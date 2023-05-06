/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
    let low = lowerBound(nums, target), up = upperBound(nums, target);
    if (low === nums.length || nums[low] !== target) return [-1, -1];
    let first = low, last = up - 1;
    return [first, last];
};
function lowerBound(nums, target) {
    let left = 0, right = nums.length;
    while (left < right) {
        let mid = Math.floor((left + right) / 2);
        if (nums[mid] < target) left = mid + 1;
        else right = mid;
    }
    return left;
};
function upperBound(nums, target) {
    let left = 0, right = nums.length;
    while (left < right) {
        let mid = Math.floor((left + right) / 2);
        if (nums[mid] <= target) left = mid + 1;
        else right = mid;
    }
    return left;
};