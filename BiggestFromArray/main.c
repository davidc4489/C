#include "biggestFromArray.h"
#include <stdio.h>

int main(){
    int arr1[] = {1, 6, 13, 22, 110, 18731, 874632};
    int arr2[] = {1, 7, 87, 243, 657, 1267, 2376, 12768};
    int i = 0;
    
    for(i = 0; i < 7; i++){
        printf("%d ", arr1[i]);
    }

    printf("\n");

    biggest_from_array(arr1, arr2, 7, 8);

    for(i = 0; i < 7; i++){
        printf("%d ", arr1[i]);
    }

    printf("\n");

    return 0;
}