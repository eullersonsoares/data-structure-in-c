#include <stdio.h>
#include <stdlib.h>

int main() {
    int * pointer;
    pointer = (int*) malloc(5 * sizeof(int));

    if(pointer != NULL) {
        int i;

        for(i=0; i<5; i++){
            pointer[i] = i + 1;
        }

        for(i=0; i<5; i++){
            printf("%d ", pointer[i]);
        }

        free(pointer);
    } else {
        printf("Erro na alocação de memória");
    }
}