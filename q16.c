#include <stdio.h>

int main() {
    int n, i, pos, value, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; // assuming max 100 elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nOriginal Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n\nChoose insertion position:\n");
    printf("1. Front\n2. Middle\n3. End\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Determine position based on choice
    if (choice == 1)
        pos = 0;                     // Front
    else if (choice == 2)
        pos = n / 2;                 // Middle
    else if (choice == 3)
        pos = n;                     // End
    else {
        printf("Invalid choice!\n");
        return 0;
    }

    // Shift elements right to make space
    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    n++; // Increase array size

    printf("\nArray after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}