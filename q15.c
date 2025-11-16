#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int last = arr[n - 1];  // Store last element

    // Shift elements one step to the right
    for (i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = last; // Place last element at first position

    printf("\nArray after one clockwise rotation:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}