#include <stdio.h>

int main() {

    // int a = 1;
    // int intArr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // 중괄호는 배열 값들을 초기화 할 때 사용; 배열초기화
    // // 40 byte 의 메모리 공간을 가져온 것 

    // printf("%i %i %i\n", intArr[0], intArr[1], intArr[9]); // index 도 일종의 주소

    // printf("%i\n", intArr[10000]);

    /*문자 */

    char c = 'a';
    char str1[10] = "Hello"; // null character 을 고려해야한다; 9자만 저장가능
    char str2[10] = { 'H', 'i' };

    printf("%c\n", c);
    printf("%s\n", str1); // printf 가 문자열을 한 글자씩 출력하다가 마지막 null character \0 을 만나면 더 이상 출력하지 않는다. \0 가 필요한 이유
    printf("%s\n", str2);

    printf("%hhi %hhi %hhi %hhi %hhi \n", 
        str2[0], str2[1], str2[2], str2[3], str2[4]);
    
    char str3[20] = "Hello, \0World"; // c 에서는 메모리 크기를 프로그래머가 할당한다.
    printf("%s\n", str3);  // printf 함수는 \0 을 만나면 더 이상 출력하지 말도록 만들어짐
    printf("%hhi\n", str3[10]); // 실제 결과 값 있음

    return 0;

}