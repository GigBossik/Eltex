#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned char b;
    printf("b= ");
    scanf("%hhu", &b);
    for (int i = 0; i < 8; i++) {
        printf("%c", (b & 0b10000000) ? '1' : '0');
        b <<= 1;
    }
    printf("\n");
    return 0;
}