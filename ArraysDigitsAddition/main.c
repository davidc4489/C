#include "arraysDigitsAddition.h"
#include <stdio.h>

int main(){
    int arr1[] = {2, 5 ,3};
    int arr2[] = {1, 6, 9};
    int i = 0;
    
    for(i = 0; i < 3; i++){
        printf("%d ", arr1[i]);
    }

    printf("\n");

    arrays_digits_addition(arr1, arr2, 3, 3);

    for(i = 0; i < 3; i++){
        printf("%d ", arr1[i]);
    }

    printf("\n");

    return 0;
}