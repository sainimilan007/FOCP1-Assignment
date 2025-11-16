#include <stdio.h>

void swap_pointer(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // 1 Using a Temporary Variable
    temp = a;
    a = b;
    b = temp;
    printf("Method 1 (Using temp variable): a = %d, b = %d\n", a, b);

    // Reset values for next method
    printf("\nEnter two numbers again: ");
    scanf("%d %d", &a, &b);

    // 2 Using Arithmetic (+ and -)
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Method 2 (Using arithmetic): a = %d, b = %d\n", a, b);

    // Reset values
    printf("\nEnter two numbers again: ");
    scanf("%d %d", &a, &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("Method 3 (Using bitwise XOR): a = %d, b = %d\n", a, b);
    printf("\nEnter two numbers again: ");
    scanf("%d %d", &a, &b);
    swap_pointer(&a, &b);
    printf("Method 4 (Using pointers): a = %d, b = %d\n", a, b);

    return 0;
}