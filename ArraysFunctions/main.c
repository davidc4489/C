#include <stdio.h>

#include "arraysFunctions.h"

int main(){
    Number v[10];

    zero(v, 10);
    print(v, 10);

    fill(v, 10, 42);
    print(v, 10);

    fill(v, 5, 77);
    print(v, 10);

    fill_enhanced(v, 3, 7, 88);
    print(v, 10);

    return 0;
}