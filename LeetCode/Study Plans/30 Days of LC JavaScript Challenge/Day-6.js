// Problem :- 2626. Array Reduce Transformation
// Link :- https://leetcode.com/problems/array-reduce-transformation/?gio_link_id=nPN45jD9

// Solution:
/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    if(nums.length === 0) return init;
    let val = fn(init, nums[0]), i = 1;
    while(i < nums.length) val = fn(val, nums[i++]);
    return val;
};