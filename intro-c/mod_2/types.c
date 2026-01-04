#include <stdio.h>


int main () {
    char letter = 'S';
    short n = 1855;
    int n_2 = 99999999;
    long n_3 = 1674218911;
    unsigned long long val = 0xfeedfacebeefcafe;
    float f = 2.95f;
    double f_2 = 3.145926535897932;
    long double f_3 = 18.5353966561797801L;


    printf("char - %c - %lu bytes\n", letter, sizeof(letter));
    printf("short - %d - %lu bytes\n", n, sizeof(n));
    printf("int - %d - %lu bytes\n", n_2, sizeof(n_2));
    printf("long - %ld - %lu byte\n", n_3, sizeof(n_3));
    printf("unsigned long long - %llu - %lu bytes\n", val, sizeof(val));
    printf("float - %.2f - %lu bytes\n", f, sizeof(f));
    printf("double - %.15lf - %lu bytes\n", f_2, sizeof(f_2));
    printf("long double - %.16Lf - %lu bytes\n", f_3, sizeof(f_3));
}
