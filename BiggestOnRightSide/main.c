#include "biggestOnRightSide.h"
#include <stdio.h>

int main(){
    int arr[] = {3, 2, 5, 8, 4, 2, 1, 3, 6, 2} ;
    int i = 0;
    
    for(i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    biggest_on_right_side(arr, 10);

    for(i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}