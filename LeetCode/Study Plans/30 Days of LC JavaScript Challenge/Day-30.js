// Problem :- 2649. Nested Array Generator
// Link :- https://leetcode.com/problems/nested-array-generator/?gio_link_id=JoOOVj1o

// Solution:
/**
 * @param {Array} arr
 * @return {Generator}
 */
var inorderTraversal = function*(arr) {
    for(let ele of arr) {
        if(Array.isArray(ele)) {
            yield* inorderTraversal(ele);
        } else {
            yield ele;
        }
    }
};

/**
 * const gen = inorderTraversal([1, [2, 3]]);
 * gen.next().value; // 1
 * gen.next().value; // 2
 * gen.next().value; // 3
 */