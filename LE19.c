#include <stdio.h>

int main() {
    int arr[] = {1, 3, 4, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, repeated = -1;
    int seen[100] = {0};

    for (i = 0; i < n; i++) {
        if (seen[arr[i]] == 1) {
            repeated = arr[i];
            break;
        }
        seen[arr[i]] = 1;
    }

    if (repeated != -1)
        printf("Repeated element: %d\n", repeated);
    else
        printf("No repeated element found.\n");

    return 0;
}