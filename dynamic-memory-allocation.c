#include <stdio.h>
#include <stdlib.h>

int main() {
    int * pointer;
    pointer = (int*) malloc(sizeof(int));

    if (pointer != NULL) {
        *pointer = 30;
        printf("Dynamic memory allocation: %d\n", *pointer);
        free(pointer);
    } else {
        printf("Erro in dynamic memory allocation: %d\n", *pointer);   
    }

    return 0;
}