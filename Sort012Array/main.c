#include "sort012Array.h"
#include <stdio.h>

int main(){
    int arr[] = {1, 2, 1, 0, 0, 1, 1};
    int i = 0;
    
    for(i = 0; i < 7; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    sort_012_array(arr, 7);

    for(i = 0; i < 7; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}