
#include <stdio.h>

// scan 해서 찾음, 콘솔창에서 사용자의 입력이 필요할 때 사용한다
// &: ampersand; 변수의 메모리 주소를 & 가 알려준다.
int main(void) {
    float won    = 0.0f;
    float dollar = 0.0f;
    
    printf("Input Won\n");
    scanf("%f", &won);
    
    dollar = won * 0.00089f; // float 형 literal
    
    printf("Dollar = %f\n", dollar);
}
