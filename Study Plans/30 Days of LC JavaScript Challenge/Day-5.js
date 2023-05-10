// Problem :- 2634. Filter Elements from Array
// Link :- https://leetcode.com/problems/filter-elements-from-array/?gio_link_id=a9a5VZr9

// Solution:
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    const res = [];
    let j = 0;
    for(let i = 0; i < arr.length; i++) if(fn(arr[i], i)) res[j++] = arr[i];
    return res;
};