#include <stdio.h>

int main() {
    int n, i, evenCount = 0, oddCount = 0;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    int scores[n], even_array[n], odd_array[n];

    printf("Enter %d scores: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &scores[i]);

    // Traverse and separate even & odd numbers
    for (i = 0; i < n; i++) {
        if (scores[i] % 2 == 0)
            even_array[evenCount++] = scores[i];
        else
            odd_array[oddCount++] = scores[i];
    }

    // Display Even Scores
    printf("\nEven Scores: ");
    if (evenCount == 0)
        printf("None");
    else
        for (i = 0; i < evenCount; i++)
            printf("%d ", even_array[i]);

    // Display Odd Scores
    printf("\nOdd Scores: ");
    if (oddCount == 0)
        printf("None");
    else
        for (i = 0; i < oddCount; i++)
            printf("%d ", odd_array[i]);

    printf("\n");
    return 0;
}