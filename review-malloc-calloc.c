#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 10;
    int *pointerInt = &num;

    printf("Valor de número: %d\n", num);
    printf("Endereço do número: %d\n", pointerInt);
    printf("Valor apontado por ponteiro: %d\n", *pointerInt);

    *pointerInt = 20;
    printf("Valor alterado por ponteiro: %d\n", num);

    //Dynamic:
    int * dynamicPointer;
    dynamicPointer = (int*) malloc(sizeof(int));

    if(dynamicPointer == NULL) {
        printf("Erro ao alocar memória! \n");
        return 1;
    }

    *dynamicPointer = 50;
    printf("Valor alterado por ponteiro: %d\n", *dynamicPointer);

    free(dynamicPointer);
    dynamicPointer = NULL;

    if(dynamicPointer == NULL) {
        printf("Memória foi liberada corretamente e o ponteiro está inválido.");
    }

    return 0;
}