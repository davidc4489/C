#include "printIntArray.h"
#include <stdio.h>

void print_int_array(int* array, int size){
    int i = 0;
    printf("[");
    for(i = 0; i < size-1; i++){
        printf("%d, ", array[i]);
    }
    printf("%d", array[size-1]);
    printf("]");
    printf("\n");
}

