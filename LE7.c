#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int prevGreater = -1;

        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }

        if (i > 0) {
            printf(",");
        }
        printf("%d", prevGreater);
    }

    printf("\n");

    return 0;
}