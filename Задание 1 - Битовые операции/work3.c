#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    char b;
    int c = 0;
    printf("b= ");
    scanf("%hhi", &b);
    for (int i = 0; i < 8; i++) {
        if ((b & 0b10000000) ? c++ : 0);
        b <<= 1;
    }
    printf("%d", c);
    return 0;
}