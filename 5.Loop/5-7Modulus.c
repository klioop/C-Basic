#include <stdio.h>

int main() {

    int hours, minutes, seconds = 0, DIVIDER = 60;

    while (seconds >= 0 ) {

        printf("Input seconds : ");
        scanf("%d",&seconds);

        if (seconds < 0) {
            break;
        };

        minutes = seconds / DIVIDER;
        seconds %= DIVIDER;
        hours = minutes / DIVIDER;
        minutes %= DIVIDER;
        
        printf("%d hour(s), %d minutes, %d seconds\n", hours, minutes, seconds);

 }
    printf("Good Bye\n");
    
    return 0;
}