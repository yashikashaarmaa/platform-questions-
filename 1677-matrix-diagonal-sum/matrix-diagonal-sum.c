int diagonalSum(int** mat, int matSize, int* matColSize) {
    int i, j, sum = 0;
    for (i = 0; i < matSize; i++) {
        for (j = 0; j < matSize; j++) {
            if (i == j || i + j == matSize - 1) {
                sum = sum + mat[i][j];
            }
        }
    }
    return sum;
}