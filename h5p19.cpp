#include <stdio.h>
#include <stdlib.h>

int main() {
    int b[4] = { 10, 20, 30, 40 }; 
    int* bPtr = b; 

    printf("Pointer subscript notation\n");
    for (int i = 0; i < 4; i++) {
        printf("bPtr[%d] = %d\n", i, bPtr[i]);
    }

    printf("\nPointer/offset notation\n");
    for (int offset = 0; offset < 4; offset++) {
        printf("*(bPtr + %d) = %d\n", offset, *(bPtr + offset));
    }

    system("pause");
    return 0;
}