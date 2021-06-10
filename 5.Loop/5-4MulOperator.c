#include <stdio.h>

int main() {

    double seed, target, result;
    float annualInterestRate;
    int year = 0;

    printf("Input seed money : ");
    scanf("%lf", &seed);

    printf("Input target money : ");
    scanf("%lf", &target);

    printf("Input annual interest rate (%%) : ");
    scanf("%f", &annualInterestRate);

    annualInterestRate /= 100;
    result = seed; 

    while (result < target) {
        result *= (1 + annualInterestRate); // 정수 더하기 더블은 더블; promotion
        year += 1;

        printf("%f\n", result);
    };
    printf("It takes %d years for the seed to grow to target money \
with %.1f%% interest rate.\n", year, annualInterestRate * 100);

    return 0;
}