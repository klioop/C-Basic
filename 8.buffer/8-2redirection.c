#include <stdio.h>

int main() {

    // printf("programming.\n");

    char str[100];

    scanf("%s", str);
    
    printf("I love %s.\n", str);
    /*
    terminal 에서 
    ./8-2redirection < input.txt;
    input.txt 에 저장된 문자열을 
    8-2redirection 프로그램이 입력받도록 redirect 함

    ./8-2redirection > output.txt;
    8-2redirection 의 출력을 output.txt 로 하도록 redirect

    ./8-2redirection >> output.txt;
    터미널에서 입력받고 프로그램이 출력하는 내용을 
    기존에 저장된 output.txt 에 덫붙임

    ./test | ./8-2redirection
    test 프로그램의 출력을 8-2redirection 프로그램이 입력받도록 함

    이러한 과정에서 스트림의 끝을 알기위해 eof 가 사용됐을 것이다.
    */

    return 0;
}