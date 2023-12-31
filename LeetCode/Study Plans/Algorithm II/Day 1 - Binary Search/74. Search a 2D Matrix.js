// Problem Link
// https://leetcode.com/problems/search-a-2d-matrix/

// Solution:
/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
function searchMatrix(matrix, target) {
    if (!matrix.length || !matrix[0].length) return false;
    let row = 0;
    let col = matrix[0].length - 1;
    while (col >= 0 && row <= matrix.length - 1) {
        if (matrix[row][col] === target) return true;
        else if (matrix[row][col] > target) col--;
        else if (matrix[row][col] < target) row++;
    }
    return false;
}