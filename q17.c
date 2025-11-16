#include <stdio.h>

int main() {
    int num, pos;
    printf("Enter number of elements: ");
    scanf("%d", &num);

    int arr[num];
    printf("Enter array elements:\n");
    for(int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before deletion:\n");
    for(int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter position to delete (1 to %d): ", num);
    scanf("%d", &pos);

    if(pos < 1 || pos > num) {
        printf("Invalid position!");
        return 0;
    }

    for(int i = pos - 1; i < num - 1; i++) {
        arr[i] = arr[i + 1];
    }

    num--;

    printf("\nArray after deletion :");
    for(int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}