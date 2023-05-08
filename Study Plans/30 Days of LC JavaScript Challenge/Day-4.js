// Problem :- 2635. Apply Transform Over Each Element in Array
// Link :- https://leetcode.com/problems/apply-transform-over-each-element-in-array/?gio_link_id=noqbNOv9

// Solution:
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let res = new Array(arr.length);
    for(let i = 0; i < arr.length; i++) res[i] = fn(arr[i], i);
    return res;
};