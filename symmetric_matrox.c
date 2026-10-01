#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;
    int symmetric = 1;

    printf("Enter elements of the matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check if matrix is symmetric
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric == 1)
    {
        printf("Matrix is symmetric.");
    }
    else
    {
        printf("Matrix is not symmetric.");
    }

    return 0;
}
