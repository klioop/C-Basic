#include <stdio.h>

int main() {

    char ch; // int keyword 를 붙여도 putchar 함수는 character 를 출력

    while ((ch = getchar()) != '\n') {

        // if (ch > '0' && ch <= '9') // ASCII
        //     ch = '*';

        if (ch >= 'a' && ch <= 'z') // 'A' = 65, 'a' = 97 on ASCII
            ch -= 'a' - 'A';
        else if (ch >= 'A' && ch <= 'Z')
            ch -= 'A' - 'a';

        putchar(ch);
        // 왜 한 문자 입력할 때마다 바로 문자가 출력되지 않을까?
        // getchar 함수는 입력받은 문자들을 먼저 buffer 에 집어넣고
        // while 문이 돌 때 buffer 에 저장되면 글자들에 대해 
        // 입력문이 실행된다
    }

    return 0;
}