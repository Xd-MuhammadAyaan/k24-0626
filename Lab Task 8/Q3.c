#include <stdio.h>

int main() {
    int matrix[3][3], i, j, k, minRow, maxCol, colIndex, found = 0;

    printf("Enter the elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);

    printf("Saddle points in the matrix:\n");
    for (i = 0; i < 3; i++) {
        minRow = matrix[i][0];
        colIndex = 0;
        for (j = 1; j < 3; j++) {
            if (matrix[i][j] < minRow) {
                minRow = matrix[i][j];
                colIndex = j;
            }
        }

        maxCol = minRow;
        for (k = 0; k < 3; k++) {
            if (matrix[k][colIndex] > maxCol) {
                maxCol = matrix[k][colIndex];
            }
        }

        if (minRow == maxCol) {
            printf("Saddle point found at (%d, %d) with value %d\n", i, colIndex, minRow);
            found = 1;
        }
    }

    if (!found)
        printf("No saddle point found.\n");

    return 0;
}
