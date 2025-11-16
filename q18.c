#include <stdio.h>

int main() {
    int n, i, j, count, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Invalid size!");
        return 0;
    }

    int arr[n];
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements are: ");

    for(i = 0; i < n; i++) {
        count = 1;
       
        if(arr[i] == -1)
            continue;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -1; // mark duplicate
            }
        }

        if(count > 1) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if(!found)
        printf("-1");

    return 0;
}