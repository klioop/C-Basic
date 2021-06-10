#include <stdio.h>
#include <inttypes.h> // intmax_t 사용하기 위해서 호출한 전처리기

int main() {
    
    /* multiple inputs with blank separators */
    // int i;
    // float f; // printf 에서는 float 와 double 모두 %f 가 형식지정자 이지만 scanf 에서는 double 일 경우 %lf 형식지정자를 사용해야 한다.
    // char str[30];
    // scanf("%d %f %s", &i, &f, str); // note % is absent in front of str
    // printf("%d %f %s\n", i, f, str); 
    // scanf() 는 빈칸이나 줄바꿈이 입력되기 전까지 입력받은 결과물을 buffer 에 저장한다.
    // 예를 들어서, str 자리에 hello world 를 입력하면 hello 까지만 출력되고 world 는 buffer 에 남아있다.

    /* character  */
    // char c;
    // scanf("%c", &c);   // try blank
    // printf("%i\n", c); // blank is 32 on ASCII Table

    /* Unsigned as signed */
    // unsigned i;
    // scanf("%i", &i);
    // printf("%i\n", i); 
    // unsigned 인데 scanf 에서 -정수 값 입력해도 잘 출력됨 WHY?
    // unsigned 메모리 공간에 signed 정수를 저장하고 signed 정수로 해석해서 출력해서 그렇다
    // 이런 성질을 이용해서 코딩하지 말기!

    /* Unsigned as unsigned */
    // unsigned i2;
    // scanf("%u", &i2);
    // printf("%u\n", i2); // -1024 를 입력하면 4294966272 가 나옴 왜?
    // unsigned 인데 음수값 넣으니까 오버플로우 발생해서 다른 값 나오는 것

    /* floating point numbers  */
    // l for double for %f, %e, %E
    // double d = 0.0;
    // scanf("%lf", &d); // lf, try E notation
    // printf("%f %lf, %e\n", d, d, d); // printf scanf 구별

    /* Width */
    // char str[30];
    // scanf("%5s", str);
    // printf("%s\n", str);

    /* h modifier */
    // char i;
    // scanf("%hhd", &i); // try large number
    // printf("%i\n", i);

    /* integer with character */
    // int i;
    // scanf("%i", &i); // try '123ab', '1234a456'
    // printf("%i\n", i); // 123, 1234 까지만 출력됨. 왜?
    // scanf 가 %i 로 인해 문자를 만나면 더 이상 입력하지 않는다.

    /* j modifier */
    // intmax_t i; // 가장 큰 정수형 타입이다. Portable type, 시스템 마다 다를 수 있음
    // scanf("%ji", &i);
    // printf("%ji", i);

    /* Regular characters */
    // int a, b;
    // scanf("%d,%d", &a, &b); // try blank spacer only ; ,로 입력 구분한다는 의미
    // scanf("%d ,%d", &a, &b); // 빈칸을 무시해라!
    // scanf("%d, %d", &a, &b);
    // scanf("%d , %d", &a, &b);
    // scanf("%d-%d", &a, &b);
    // scanf("%dA%d", &a, &b); // A 로 입력 구분
    // printf("%d %d\n", a, b);

    /* char receives blank */
    // int a, b;
    // char c;
    // scanf("%d%c%d", &a, &c, &b); // try 123 456
    // printf("%d|%c|%d\n", a, c, b); // | is separator

    // sentences?, getchar(), fgets(), etc.

    /* return value of scanf() */
    // int a, b;
    // int i = scanf("%d%d", &a, &b); // scanf 의 반환 값은 입력한 아이템의 개수
    // printf("%d\n", i);

    /* *modifier for printf() */
    // int i = 123;
    // int width = 5; // width 를 script file 이나 scanf 등 에서 불러와서 설정할 수 있다.
    // printf("Input width : ");
    // scanf("%d", &width);
    // printf("%0*d\n", width, i); 

    /* *modifier for scanf() */
    int i;
    scanf("%*d%*d%d", &i); // scanf 에서는 %*d 는 입력은 받지만 저장은 무시된다. printf() 에서랑 완전히 다름
    printf("Your third input = %d\n", i);

    return 0;
}