#include <stdio.h>

int main() {
#define N 3
#define M 3
	int matrix[N][M];
	int i = 0;
	while (i < N)
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%d ", i+1, j+1, matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}