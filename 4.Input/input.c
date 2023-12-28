#include <stdio.h>

int main() {
    int a, b, c;
    char d;

    printf("Insert 2 numbers:");
    scanf("%d %d", &a, &b);

    /* Consume the newline character left in the input buffer */
    getchar();

    c = a + b;
    printf("\n%d + %d = %d\n", a, b, c);

    printf("Insert a char:");
    d = getchar();
    putchar(d);
    printf("\n");

    return 0;
}