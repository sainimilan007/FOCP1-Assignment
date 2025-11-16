#include <stdio.h>

// Recursive function to find HCF using Euclidean algorithm
int hcf_recursive(int a, int b) {
    if (b == 0)
        return a;
    return hcf_recursive(b, a % b);
}

// Iterative function to find HCF using Euclidean algorithm
int hcf_iterative(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Input from user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Display results
    printf("HCF (Recursive): %d\n", hcf_recursive(num1, num2));
    printf("HCF (Iterative): %d\n", hcf_iterative(num1, num2));

    return 0;
}