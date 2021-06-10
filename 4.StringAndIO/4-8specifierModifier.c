#include <stdio.h>
#include <limits.h>

int main() {

    printf("%10i\n", 1234567);
    printf("%-10i\n", 1234567);
    printf("%+i %+i\n", 123, -123);
    printf("% i \n% i\n", 123, -123);
    printf("%X\n", 17);
    printf("%#X\n", 17);
    printf("%05i\n", 123);
    printf("%*i\n", 7, 456); // 7 은 width 를 입력하는 것
    printf("%0*i\n", 7, 456); // scanf 에서는 * 의미가 다름 주의
    
    printf("\n<Precision>\n");
    printf("%.3d\n", 1024);
    printf("%.5d\n", 1024);
    printf("%.3f\n", 123456.1234567); // .f 와 .d 가 적용되는 게 다름 f 일 때는 소수점 자리에서 적용됨
    printf("%.3f\n", 123456.1235);
    printf("%10.3f\n", 123.45678);
    printf("%010.3f\n", 123.45678);
    printf("%.5s\n", "ABCDEFGHIJKLMN"); // string 에 경우 .5 는 글자수를 제한
    printf("%.s\n", "ABCDEFGHIJKLMN"); // 0 글자로 제한, 기본값이 0

    printf("\n<Length>\n");
    printf("%hhd %hd %d\n", 257, 257, 257); // hhd 는 signed char 257 에 대해서 overflow 발생해서 1 이 찍힘
    printf("%d %lld %lld\n", INT_MAX + 1, INT_MAX + 1, 2147483648LL);


    return 0;
}