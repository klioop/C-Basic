#include <stdio.h>

int isPrimeNumber();

int main() {
    
    unsigned num;
    int isPrime = 0;
    
    printf("Please input a number: ");
    scanf("%d", &num);

    if (isPrimeNumber(num))
        printf("%u is a prime number\n", num);
    else
        printf("%u is not a prime number\n", num);

    return 0;
}

int isPrimeNumber(unsigned num) {
    for (int i = 2; i < num - 1; i ++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
};