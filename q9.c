#include <stdio.h>

int main() {
    int n, i, position = -1;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    int scores[n];
    printf("Enter %d scores: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &scores[i]);

    // Linear search for first occurrence of 99
    for (i = 0; i < n; i++) {
        if (scores[i] == 99) {
            position = i;
            break; // Stop at first match
        }
    }

    if (position != -1)
        printf("\nThe score 99 first occurs at position %d (index %d).\n", position + 1, position);
    else
        printf("\nThe score 99 was not found in the array.\n");

    return 0;
}