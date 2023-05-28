// Problem :- 2625. Flatten Deeply Nested Array
// Link :- https://leetcode.com/problems/flatten-deeply-nested-array/?gio_link_id=rREX6Gm9

// Solution:
/**
 * @param {any[]} arr
 * @param {number} depth
 * @return {any[]}
 */
var flat = function (arr, n) {
    if(n == 0) return arr;
    let answer = [];
    for(let i = 0; i < arr.length; i++){
        if(n > 0 && Array.isArray(arr[i])) answer.push(...flat(arr[i], n-1));
        else answer.push(arr[i]);
    }
    return answer;
};