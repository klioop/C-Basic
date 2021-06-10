#include <stdio.h>

int main() {

    int i = 1, j = 1;
    int i_post, pre_j;

    i_post = i ++; // i_post 의 경우 1 이 먼저 i_post 에 대입된 다음에 i 가 증가하고
    pre_j = ++j; // pre_j 의 경우 j 가 먼저 증가한 다음에 pre_j 에 할당된다.
    
    printf("%d %d\n", i, j); // 결과 예상해보기
    printf("%d %d\n", i_post, pre_j); // 결과 분석
    // i_post = 1, pre_j = 2 가 찍힌다.
    
    return 0;
}