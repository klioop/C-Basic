#include <stdio.h>
#include <stdbool.h>
# include <ctype.h>

int main() {

    int c;

    // ASCII CODE 는 항상 양수인데 signed int 로 받는 이유
    // EOF(End Of File 이 -1 로 정의가 되어있기 때문이다.)
    // while ((c = getchar()) != EOF) {
    //     putchar(c);
    //     // 운영체제가 eof 를 알려준다
    // }
    // mac 에서는 ctrl + d 가 eof

    // stream 
    // 데이터 stream 의 끝을 나타내는 것이 eof
    while (true) {
        c = getchar();
        printf("%d\n", c);
        
        if (c == EOF)
            break;
    }

    return 0;
}
