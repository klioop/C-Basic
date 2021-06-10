#include <stdio.h>

int main() {
    char fruitName[40] ; // stores only one character; 1byte 짜리 공간을 40개 확보
    // 40 개의 메모리 중 첫번 째 메모리 주소만 알 수 있음
    // fruitName 자체가 주소

    printf("What is your favorite fruit?\n");

    scanf("%s", fruitName); // be careful with &
    // & 붙였던 이유는 fruitName 의 주소를 가져오기 위해서 였음
    // 스트링의 경우 fruitName 자체가 주소이기 때문에 & 를 prefix 로 사용하지 않는다.
    
    printf("You like %s\n", fruitName);

    return 0;


}