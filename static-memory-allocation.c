#include <stdio.h>

int globalValue = 20; //static variable

void showValue() {
    printf("Global value: %d\n", globalValue);
}

int main() {
    showValue();
    return 0;
}