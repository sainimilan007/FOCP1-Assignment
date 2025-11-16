#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0; // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Divisible by another number → not prime
    }
    return 1; // Prime
}

int main() {
    int n, i, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Traverse array and count primes
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i]))
            count++;
    }

    printf("\nTotal prime numbers in the array: %d\n", count);

    return 0;
}