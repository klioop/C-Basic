#include <stdio.h>
#include <stdbool.h>

int main() {

    int num = 0, sum = 0;
    int status;

    printf("Enter an integer (q to quit) : ");
    
    status = scanf("%d", &num);
    // 만약 q 를 입력하면, q 는 정수가 아니기 때문에 입력을 받지 않는다
    // 따라서 status 의 값은 0 이됨.

    while (status == 1) {

        sum += num;
        printf("Enter next integer (q to quit) : ");
        status = scanf("%d", &num);

    };

    printf("Sum = %d\n", sum);


    return 0;
}