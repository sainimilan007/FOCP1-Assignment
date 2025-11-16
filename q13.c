#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Handle special cases
    if (n == 1) {
        printf("Peak element: %d (at index 0)\n", arr[0]);
        return 0;
    }

    // Check first element
    if (arr[0] >= arr[1]) {
        printf("Peak element: %d (at index 0)\n", arr[0]);
        return 0;
    }

    // Check middle elements
    for (i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("Peak element: %d (at index %d)\n", arr[i], i);
            return 0;
        }
    }

    // Check last element
    if (arr[n - 1] >= arr[n - 2]) {
        printf("Peak element: %d (at index %d)\n", arr[n - 1], n - 1);
        return 0;
    }

    printf("No peak element found.\n");
    return 0;
}