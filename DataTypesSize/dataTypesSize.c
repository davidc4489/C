#include <stdio.h>
int main() {
    printf("Bytes in char %ld\n", sizeof(char));
    printf("Bytes in int %ld\n", sizeof(int));
    printf("Bytes in short int %ld\n", sizeof(short int));
    printf("Bytes in long int %ld\n", sizeof(long int));
    printf("Bytes in float %ld\n", sizeof(float));
    printf("Bytes in double %ld\n", sizeof(double));
    printf("Bytes in long double %ld\n", sizeof(long double));
    return 0;
}