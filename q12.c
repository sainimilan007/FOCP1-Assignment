#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    int scores[n];
    printf("Enter %d scores: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &scores[i]);

    int max = scores[0];
    int min = scores[0];

    // Traverse array to find max and min
    for (i = 1; i < n; i++) {
        if (scores[i] > max)
            max = scores[i];
        if (scores[i] < min)
            min = scores[i];
    }

    printf("\nMaximum Score = %d\n", max);
    printf("Minimum Score = %d\n", min);

    return 0;
}