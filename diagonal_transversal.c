#include <stdio.h>

int main() {
    int matrix[100][100];
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for (int d = 0; d < rows + cols - 1; d++) {
        if (d % 2 == 0) {
            // Traverse upward
            int i = (d < rows) ? d : rows - 1;
            int j = d - i;

            while (i >= 0 && j < cols) {
                printf("%d ", matrix[i][j]);
                i--;
                j++;
            }
        } else {
            // Traverse downward
            int j = (d < cols) ? d : cols - 1;
            int i = d - j;

            while (j >= 0 && i < rows) {
                printf("%d ", matrix[i][j]);
                i++;
                j--;
            }
        }
    }

    return 0;
}
