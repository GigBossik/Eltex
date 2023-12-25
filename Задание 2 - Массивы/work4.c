#include <stdio.h>

int main() {

#define N 5
	int arr[N][N];
	int startline=0, endline=4, startcol=0, endcol=4;
	int a = 1;

	while (startline <= endline || startcol <= endcol) {
		for (int i = startcol; i <= endcol; i++) {
			arr[startline][i] = a++;
		}
		startline++;

		for (int i = startline; i <= endline; i++) {
			arr[i][endcol] = a++;
		}
		endcol--;
		if (startline <= endline) {
			for (int i = endcol; i >= startcol; i--) {
				arr[endline][i] = a++;
			}
			endline--;
		}
		if (startcol <= endcol) {
			for (int i = endline; i >= startline; i--)
			{
				arr[i][startcol] = a++;
			}
			startcol++;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}