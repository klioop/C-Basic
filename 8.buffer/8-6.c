#include <stdbool.h>
#include <stdio.h>

long getLong(void);

int main() {

    long number;

    while (true) {
        printf("Please input an integer between 0 and 100.\n");
        number = getLong();

        if (number >= 1 && number < 100) {
            printf("Good, thank you!\n");
            break;
        }
        else 
            printf("The number you input is not in the right range. Please, try again!\n");
    }
    printf("The number you input is %ld. Bye!\n", number);

    return 0;
}

long getLong(void) {
    printf("Please input an integer and press enter.\n");
    
    long input;
    char c;

    // scanf 의 반환 값은 입력받은 input 의 개수
    // 숫자가 아닌 문자를 입력하면 scanf 의 반환값은 0 이 된다.
    while (scanf("%ld", &input) != 1) {
        printf("Your input - ");

        while ((c = getchar()) != '\n')
            putchar(c); // input left in buffer, buffer 를 비움과 동시에 뭐가 buffer 에 있었는지 출력함
        
        printf(" - is not an integer. Please try again.\n");
    }

    printf("Your input %ld is an integer. Thank you.\n", input);

    return input;
}