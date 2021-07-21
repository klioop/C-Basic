#include <stdio.h>
#include <stdbool.h>

int main() {

    // char str[255];
    // int i, i2;
    // double d;

    // scanf("%s %d %lf", str, &i, &d);
    // printf("%s %d %f\n", str, i, d);

    // // or (see the difference)

    // scanf("%s %d %d", str, &i, &i2);
    // printf("%s %d %d\n", str, i, i2);

    // or (see the difference)

    char c;

    while ((c = getchar() != '\n'))
        putchar(c);
        
    printf("\n");

    return 0;
}

/*
buffer 에 쌓여있는 데이터가 엔터를 치는 순간 프로그램으로 넘어간다. 왜?
엔터치기 전에 터미널에서 입력 값 수정 가능하기도 하고

기본적으로 우리가 작성한 프로그램은 터미널(콘솔창)에서 입력을 받을 때 문자 한 글자 한 글자로 입력을 받는다.
scanf 는 스페이스 바를 치면 한 가지 항목의 입력이 끝났다는 것으로 알지만
getchar() 는 스페이스 바의 입력도 버퍼에 넣는다.

두 번째 경우 입력을 받는 데이터 타입들은 모두 정수형이다.
scanf 는 입력을 받을 때 문자로 받으면서 내부에서 숫자로 변환할 수 있는지 확인하고 .을 만나는 순간 정수형이니 숫자로 반환이 불가능하다는 것을 알고
입력받은 값을 포인터에 전달한다.
.을 포함한 뒤 문자들은 버퍼에 남게된다.
*/