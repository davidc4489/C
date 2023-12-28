#include <stdio.h>
int main() {
    char* s = "Hello World.\n";
    
    printf("X+Y=%d", 2+3);
    printf("\nX+Y=%d", (2+3));
    printf("\nX*Y=%d\n", 2*3);
    printf("%s", s);

    return 0;
}