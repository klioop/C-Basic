#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define PERIOD '.'

int main() {

    char ch;
    int countOfChar = 0, countOfWord = 0, countOfLine = 1;
    bool wordFlag = false;
    bool lineFlag = false;

    while ((ch = getchar()) != PERIOD) {
       if (!isspace(ch) && !lineFlag ){
           countOfLine++;
           lineFlag = true;
       }

       if (ch == '\n') {
           lineFlag = false;
       }

       if (!isspace && !wordFlag) {
           countOfWord++;
           wordFlag = true;
       }

       if (isspace(ch)) {
           wordFlag = false;
       }

    }

    printf("Characters: %d, Words: %d, Lines: %d", countOfChar, countOfWord, countOfLine);

    return 0;
}