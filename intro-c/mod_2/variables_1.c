#include <stdio.h>

int main() {
    int x = 2;
    printf("The variable has this digit: %d\n", x);

    char letter = 'a';
    printf("The variable has this letter: %c\n", letter);
    
    char letter_2 = 'b';
    unsigned long size_of_b = sizeof(letter_2);
    printf("The size in Bytes for the letter 'b' is: %ld\n", size_of_b);
    

    long long z = 123412341234;
    unsigned long size_of_z = sizeof(z);
    printf("This variable has a long digit of: %lld\n", z);
    printf("The size in Bytes for this long digit is: %ld\n", size_of_z);
}
