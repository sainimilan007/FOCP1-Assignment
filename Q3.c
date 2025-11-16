#include <stdio.h>

int main() {
    int a, b, result;

    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);

    result = a + (~b + 1);  
    printf("Result = %d", result);

    return 0;
}