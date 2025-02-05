#include <stdio.h>

int main() {
    int number = 10; //normal variable
    int * pointer; //pointer declared

    //The pointer stores the address of the variable number
    pointer = &number;
    printf("Number value: %d\n", number);
    printf("Number address: %p\n", pointer);
    printf("Value pointed to by the pointer: %d\n", *pointer);

    return 0;
}