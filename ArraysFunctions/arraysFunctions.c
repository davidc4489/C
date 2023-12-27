#include <stdio.h>

#include "arraysFunctions.h"

void zero(int v[], unsigned int size)
{
    fill(v, size, 0);
}

void fill(int v[], unsigned int size, int value)
{
    fill_enhanced(v, 0, size, value);
}


void fill_enhanced(int v[], unsigned int start, unsigned int end, int value)
{
    unsigned int i;
    for (i = start; i < end; ++i) {
        v[i] = value;
    }
}

void print(int v[], unsigned int size)
{
    unsigned int i;
    for (i = 0; i < size; ++i) {
        printf("%d, ", v[i]);
    }

    printf("\n");
}