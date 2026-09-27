#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + (2 * i) / (4 * i - 1.0);
    }

    printf("Sum = %f", sum);

    return 0;
}
