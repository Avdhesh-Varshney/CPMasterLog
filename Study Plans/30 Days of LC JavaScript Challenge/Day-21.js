// Problem :- 2677. Chunk Array
// Link :- https://leetcode.com/problems/chunk-array/?gio_link_id=YoXvrdGR

// Solution:
/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
    var chunkedArray = [];
    var index = 0;
    while(index < arr.length) {
        chunkedArray.push(arr.slice(index, index + size));
        index += size;
    }
    return chunkedArray;
};