#include <stdio.h>

int main() {
    int n, k, i;
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k");
        return 0;
    }

    int sum = 0;

    // Calculate the sum of the first k elements
    for (i = 0; i < k; i++) {
        sum += arr[i];
    }

    int maxSum = sum;

    // Slide the window across the array
    for (i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}