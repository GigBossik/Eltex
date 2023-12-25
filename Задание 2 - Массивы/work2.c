#include <stdio.h>
#define N 5

int main() {
    int arr[N] = { 1,2,3,4,5 }, a;
    for (int i = 0; i < N; i++) {
        a = arr[i];
        printf("%d ", a);
    }
    printf("\n");

    for (int i = 4; i > N / 2; i--) {
        a = arr[i];
        arr[i] = arr[N - i - 1];
        arr[N - i - 1] = a;
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
