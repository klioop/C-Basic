#include <stdio.h>

int main() {

    /* promotions in assginments */

    short s = 64; // 작은 걸 큰 것에 대입 - promotion
    int i = s;

    float f = 3.14f;
    double d = f;

    /* demotion in assignments */

    d = 1.25; // double literal, 1.25f - float literal
    f = 1.25;
    f = 1.123; // 데이터 사이즈가 더 큰 자료형을 작은 자료형에 대입하는 것: demotion

    /* ranking of types in operations */

    // long double > double > float
    // unsigned long long, long long
    // unsigned long, long
    // unsigned, int
    // short int, unsigned short int
    // signed char, char, unsigned char
    // _Bool
    d = f + 1.234; // complier 는 float 를 double 로 바꾸고 더블끼리 더함
    f = f + 1.234; // float 에 더블을 대입 ; 데이터 손실 가능

    /* automatic promotion of function arguments */
    // 1. Functions without prototypes
    // 2. Variadic functions (ellipsis)

    /* casting operators */
    d = (double)3.14f; // double 이 됨
    i = 1.6 + 1.7; // i = 3 (3.3 으로 계산되고 0.3 이 절삭)
    i = (int)1.6 + (int)1.7; // i = 2 (1 + 1)

    /* more examples */
    char c;
    f = i = c = 'A'; // 65 승급 -> 형변환
    printf("%c %d %f\n", c, i, f);
    c += 2; // 'C', 67
    i = f + 2 * c; // 65.0f + 2 * 67
    printf("%c %d %f\n", c, i, f);
    c = 1106; // demolition, 1106 = 0b10001010010, 0b01010010 = 1106 % 256 = 82 = 'R'
    printf("%c\n", c);
    c = 83.99;
    printf("%c, %hhd\n", c, c);

    return 0;
}