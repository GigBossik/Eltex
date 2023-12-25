#include <stdio.h>

int main() {

	int arr[10];
	int* ptr;
	ptr = &arr;
	for (int i = 0; i < 10; i++) {
		*ptr = i + 1;
		printf("%d ", *ptr);
		ptr++;
	}

	return 0;
}