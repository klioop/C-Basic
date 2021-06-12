#include <stdio.h>

void draw(int n);

int main() {

    int i = 5;
    char c = '#';
    float f = 7.1f;

    draw(i); // draw 함수를 호출할 때 i = 5 의 '실제 값(value)' 이 들어감 -> argument
    draw((int)c); // promotion
    draw((int)f); // demolition

    /* Argument vs. Parameters */
    // actual argument, actual parameter -> argument (values)
    // formal argument, formal parameter -> parameter (variables)


    return 0;
}

// We can say that a function draw is parameterized with respect to variable int n
void draw(int n) {
    
    for(int i = 0; i < n; i++) {
        printf("*");
    };

    printf("\n");
}