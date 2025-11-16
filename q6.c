#include <stdio.h>
#include <math.h>

int main() {
    int choice, decimal = 0, i = 0, rem;
    long long binary, bin = 0, place = 1;

    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter binary number: ");
        scanf("%lld", &binary);
        while (binary != 0) {
            rem = binary % 10;
            decimal += rem * pow(2, i);
            binary /= 10;
            i++;
        }
        printf("Decimal = %d\n", decimal);
    }
    else if (choice == 2) {
        printf("Enter decimal number: ");
        scanf("%d", &decimal);
        while (decimal != 0) {
            rem = decimal % 2;
            bin += rem * place;
            decimal /= 2;
            place *= 10;
        }
        printf("Binary = %lld\n", bin);
    }
    else
        printf("Invalid choice!\n");

    return 0;
}