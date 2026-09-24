#include <stdio.h>

int main() {
    int arr[] = {10, -5, 0, 7, -2, 0, 8};
    int n = 7;
    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive elements: %d\n", positive);
    printf("Negative elements: %d\n", negative);
    printf("Zero elements: %d\n", zero);

    return 0;
}
