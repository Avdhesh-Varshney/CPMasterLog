// Problem Link: https://leetcode.com/problems/map-of-highest-peak/

// Solution:
class Solution {
    bool isValidCell(pair<int, int> cell, int rows, int columns) {
        return cell.first >= 0 && cell.second >= 0 && cell.first < rows && cell.second < columns;
    }
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};

        int rows = isWater.size(), columns = isWater[0].size(), heightOfNextLayer = 1;
        vector<vector<int>> cellHeights(rows, vector<int>(columns, -1));
        queue<pair<int, int>> cellQueue;
        for (int x = 0; x < rows; x++) {
            for (int y = 0; y < columns; y++) {
                if (isWater[x][y]) {
                    cellQueue.push({x, y});
                    cellHeights[x][y] = 0;
                }
            }
        }

        while (!cellQueue.empty()) {
            int layerSize = cellQueue.size();
            for (int i = 0; i < layerSize; i++) {
                pair<int, int> currentCell = cellQueue.front();
                cellQueue.pop();
                for (int d = 0; d < 4; d++) {
                    pair<int, int> neighborCell = {currentCell.first + dx[d], currentCell.second + dy[d]};
                    if (isValidCell(neighborCell, rows, columns) && cellHeights[neighborCell.first][neighborCell.second] == -1) {
                        cellHeights[neighborCell.first][neighborCell.second] = heightOfNextLayer;
                        cellQueue.push(neighborCell);
                    }
                }
            }
            heightOfNextLayer++;
        }
        return cellHeights;
    }
};