#include <stdio.h>

#define SIZE 5


int main() {

    int arr[SIZE];
    int sum = 0, average;
    
    printf("ENTER %d numbers : ", SIZE);
    
    for (int i; i < SIZE; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / SIZE;


    printf("Sum = %d\n", sum);
    printf("AVERAGE = %d\n", average);

    return 0;
}