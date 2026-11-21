int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int m = gridSize;
    int n = gridColSize[0];
    int row = 0;
    int col = n - 1;
    int count = 0;

    while (row < m && col >= 0) {
        if (grid[row][col] < 0) {
            // All elements below grid[row][col] in this column are negative
            count += (m - row);
            col--;
        } else {
            // Current element is non-negative, move to the next row
            row++;
        }
    }

    return count;
}