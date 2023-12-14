/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function(nums, target) {
    let st = 0, lt = nums.length -1;
    while(st <= lt) {
        let mid = Math.floor((lt-st)/2 + st);
        if(nums[mid] == target) return mid;
        else if(nums[mid] > target) lt = mid-1;
        else st = mid+1;
    }
    return st;
};