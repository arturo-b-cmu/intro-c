#include <stdio.h>

int main () {
    int a = 2;
    printf("%d\n",a);

    int b = 0b00110101;
    printf("%d\n", b);
    printf("%x\n", b);

    int c = ~b;
    printf("%d\n", c);

}
