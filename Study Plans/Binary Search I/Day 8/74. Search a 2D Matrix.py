class Solution:
    def searchMatrix(self, matrix, target):
        if not matrix or target is None:
            return False
        row, col = 0, len(matrix[0])-1
        while col >= 0 and row <= len(matrix)-1:
            if matrix[row][col] == target:
                return True
            elif matrix[row][col] > target:
                col = col-1
            else:
                row = row + 1
        return False