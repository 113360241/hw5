#include <stdio.h>

void stringReverse(const char* str);

int main(void) {
    char input[] = "ABCDEFG";

    printf("原始字串: %s\n", input);
    printf("反轉字串: ");
    stringReverse(input);
    printf("\n");

    return 0;
}


void stringReverse(const char* str) {
    if (*str == '\0') {
        return; 
    }
    stringReverse(str + 1);
    putchar(*str);       
}
