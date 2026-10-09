#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];
    int totalSum = 0, leftSum = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    for (i = 0; i < n; i++) {
        totalSum -= arr[i];

        if (leftSum == totalSum) {
            printf("%d", i);
            return 0;
        }

        leftSum += arr[i];
    }

    printf("-1");
    return 0;
}