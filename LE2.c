
#include <stdio.h>

int findCeil(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;   // Search for first occurrence
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int arr[] = {1, 2, 2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Enter x: ");
    scanf("%d", &x);

    int index = findCeil(arr, n, x);

    printf("Index: %d\n", index);

    return 0;
}