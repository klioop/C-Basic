#include <stdio.h>
#include <stdlib.h> //malloc()

struct MyStruct {
    int i;
    float f;
};

int main() {
    
    // int a = 0;
    // unsigned int int_size1 = sizeof a;
    // unsigned int int_size2 = sizeof(int);
    // unsigned int int_size3 = sizeof(a); // sizeof 는 연산자, 함수처럼 쓰임

    // size_t int_size4 = sizeof(a); // sizeof(a) 가 unsigned int 가 아닐수도 있을 때 size_t 를 쓴다. 이식성을 높임
    // size_t float_size = sizeof(float);

    // printf("Size of int type is %u bytes.\n", int_size1);
    // printf("Size of int type is %zu bytes.\n", int_size4); // zu 는 size_t 에 대응하는 format specifier
    // printf("Size of int type is %zu bytes.\n", float_size);

    /* 2. sizeof arrays */

    // int int_arr[30]; // int_arr[0] = 1024;
    // int *int_ptr = NULL; // pointer
    // int_ptr = (int*)malloc(sizeof(int) * 30); // malloc == memory allocation

    // printf("Size of array = %zu bytes\n", sizeof(int_arr));
    // printf("Size of pointer = %zu bytes\n", sizeof(int_ptr));

    /* 3. sizeof character array */

    // char c = 'a';
    // char string[10]; // maximally 9 character + '\0'(null character)
    // // '\0' 은 마침표 역할하는 문자로 이해하자

    // size_t char_size = sizeof(char);
    // size_t stringSize = sizeof(string);

    // printf("Size of char type is %zu bytes.\n", char_size);
    // printf("Size of string type is %zu bytes.\n", stringSize);

    /* 4. sizeof struct */

    printf("%zu \n", sizeof(struct MyStruct)); // sizeof(int) + sizeof(float) = 4 + 4


    return 0;

}