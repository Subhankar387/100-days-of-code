#include <stdio.h>

int main() {
    int m, n, i, j, k;

    printf("Enter the size of first array: ");
    scanf("%d", &m);

    printf("Enter the size of second array: ");
    scanf("%d", &n);

    int a[m], b[n], c[m + n];

    printf("Enter elements of first sorted array:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second sorted array:\n");
    for (j = 0; j < n; j++) {
        scanf("%d", &b[j]);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while (i < m) {
        c[k++] = a[i++];
    }

    while (j < n) {
        c[k++] = b[j++];
    }

    printf("Merged sorted array:\n");
    for (k = 0; k < m + n; k++) {
        printf("%d ", c[k]);
    }

    printf("\n");
    return 0;
}