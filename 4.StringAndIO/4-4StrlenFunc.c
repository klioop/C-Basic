#include <stdio.h>
#include <string.h> // strlen and more
#include <stdlib.h>

int main() {

    // char str1[100] = "Hello";
    // char str2[] = "Hello"; // c 가 알아서 공간 할당
    // char str3[100] = "\0"; // 빈칸과 null character 는 다르다!
    // char str4[100] = "\n";

    // printf("%zu %zu\n", sizeof(str1), strlen(str1)); // zu 는 size_t 의 형식지정자
    // printf("%zu %zu\n", sizeof(str2), strlen(str2)); // strlen 은 null 케릭터를 제외한 문자 수를 반환한다.
    // printf("%zu %zu\n", sizeof(str3), strlen(str3));
    // printf("%zu %zu\n", sizeof(str4), strlen(str4));

    /* Extra: 동적할당 */ 
    char *str5 = (char*)malloc(sizeof(char) * 100); // pointer
    str5[0] = 'H'; str5[1] = 'e'; str5[2] = 'l' ; str5[3] = 'l';
    str5[4] = 'o'; str5[5] = '\0';

    printf("%zu %zu\n", sizeof(str5), strlen(str5)); // 8 byte 는 포인터 변수 자체의 사이즈
    // 포인터 str5 는 얼만큼의 메모리를 할당받을지 os 에게 알려줄지 알 수 없기 때문 주소를 적는 메모지의 사이즈만큼(포인터의 변수 사이즈)만 알 수 있다
    
    return 0;

}