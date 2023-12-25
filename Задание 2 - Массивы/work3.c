#include <stdio.h>

int main() {

#define N 3

	int arr[N][N];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			arr[i][j] = 0;
		}
	}
	for (int i = 0; i <= N-2; i++) {
		for (int j = 0; j <= N-i-2; j++)
			arr[i][j] = 1;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}