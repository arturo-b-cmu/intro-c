#include <stdio.h>
#include <stdlib.h>
int main() {
    int L = 16;
    char *w = (char *)malloc(L);
    for(int i=0; i<L; i++) {
        w[i] = 61 + i;
    }
    printf("%s\n", w);
}
