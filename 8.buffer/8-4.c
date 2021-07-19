#include <stdio.h>
#include <stdbool.h>

int main() {

    int count = 0;
    
    while (true) {
        printf("Current count is %d. Continue? (y/n)\n ", count);

        int c = getchar();

        if (c == 'n')
            break;
        else if (c == 'y') {
            count++;
        } else {
            printf("Please input y or n (yes or no)!\n");
        }
        // buffer 한 글자만 남기고 초기화 하는 것
        while (getchar() != '\n') {
            continue;
        }
         /*
        위 c 에서 yes 를 입력받았다고 가정하면
        c 에 y 가 저장되고 버퍼에 es\n 이 남게된다.
        \n 을 만날 때 까지 버퍼에 남아있는 문자들은 날아가고 \n 이 나오면
        while 의 조건을 충족하지 않게 되면서 while 문이 멈추고 \n도
        버퍼에서 사라진다.
        */

    }


    return 0;
}