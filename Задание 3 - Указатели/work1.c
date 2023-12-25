#include <stdio.h>

int main() {
	int a;
	int b;
	char *ptr;

	printf("enter the number: ");
	scanf("%d", &a);

	ptr = &a;

	ptr += 2;
	printf("third byte of a = %d\n", *ptr);

	printf("number to replace the third byte: ");
	scanf("%d", &b);
	*ptr = b;

	printf("result: %d", a);

	printf("\n");
	return 0;
}